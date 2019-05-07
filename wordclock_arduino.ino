/*
Wordclock using arduino with RTC module

@author: Jens Bandener (j.bandener@gmail.com)
@date: 2019-05-04 
@version: 2019-02-dev.arduino

This wordclock code uses the PROGMEM to store the LED array to be used on small microcontrollers with 
limited memory. Via I2C interface a RTC module is connected using the uRTCLIB is. Once the time is set
in the RTC module, setting the time needs to be disabled in the source code

Debug information is printed via the arduino UART interface (115200 Baud)

The word clock uses 110 WS2812 RGB LEDs to show the time. Use a power source that is capable of at least 1A
current. Typical current consumption is ~0.5A. 
When running from USB port on PC, current consumption might exceed maximum allowed current on USB port. If the
system crashes, reduce the color / light intensity for testing purpose.

LED test script is called when PIN7 is connected to GND on boot-up / power-up of the controller. The GPIO is 
configured as internal Pull-up.

@TODO: add support for external GPIO to trigger setting the time

*/


#import "time.h"
#import "colors.h"
//#import <stdlib.h>

#include <NeoPixelAnimator.h>
#include <NeoPixelBus.h>

#include "Arduino.h"
#include "Wire.h"
#include "uRTCLib.h"
#include <avr/pgmspace.h>

#define PixelPin 11
#define PixelCount 110


/*
--------------- CONFIGURATION ---------------------------------------------------
*/

#define SET_TIME                  // allows setting the time by pulling down PIN8 during boot-up phase
#define SUMMER_TIME 1               // set to 1 for Summertime, set to 0 for winter time
#define UPDATE_TIME 10000           // delay for checking the RTC module (periodically) in [ms]
#define RUN_DIAGNOSTICS 0           // enables power on pixel test
RgbColor sel_color = orange;     // available colors in colors.h or redfine with sel_color(R,G,B) with 8bit integer

/*
--------------- END - CONFIGURATION ----------------------------------------------
*/


/*
Global used Variables 
*/
NeoPixelBus<NeoGrbFeature, Neo800KbpsMethod> strip(PixelCount, PixelPin);
uRTCLib rtc;
int hour = 0;
int minute = 0;
const int plen = 23;
int last_pixel_id = 0;


/*
Setup and initialization of Interfaces
*/
void setup() {
    pinMode(7, INPUT_PULLUP);
    pinMode(8, INPUT_PULLUP);
    Serial.begin(115200);
    //while (!Serial) {
    //}
    delay(3000);
    Serial.println("Arduino Wordclock starting...");
    Wire.begin();
    delay(100);
    strip.Begin();
    delay(100);
    strip.Show();
    rtc.set_rtc_address(0x68);
	rtc.set_model(URTCLIB_MODEL_DS3232);

    #ifdef SET_TIME
        if(digitalRead(8)==LOW) {
            rtc.set(0, 06, 20, 6, 4, 5, 19);
        //  RTCLib::set(byte second, byte minute, byte hour, byte dayOfWeek, byte dayOfMonth, byte month, byte year)
        }
    #endif

    if((RUN_DIAGNOSTICS==1) || digitalRead(7)==LOW) {
        animation_rgb_diagnosis();
    }
    //animation_blinking_star(800);
    animation_vw_logo();
}

/*
Main loop running the word-clock
The RTC clock is checked periodically
*/
void loop() {
    get_rtc_time();
    if (getSentenceID() != last_pixel_id) {
        last_pixel_id = getSentenceID();
        pixel_show_time(sel_color);
        Serial.println("DEBUG: NeoPixel has been updated...");
        Serial.print("DEBUG: Time: "); Serial.print(String((hour)%24)); Serial.print(":"); Serial.println(String(minute));
        Serial.print("DEBUG: Sentence ID: "); Serial.println(last_pixel_id);
    }
    delay(UPDATE_TIME);  
}

/*
get the current time from the RTC module via I2C
*/
void get_rtc_time() {
    rtc.refresh();
    hour = rtc.hour()%24;
    if (SUMMER_TIME == 1) {
        hour = (hour+1)%24;
    }
    minute = rtc.minute();
}

/*
    calculate the sentence id from time.h based on the current time minimize error on showing the time
*/
int getSentenceID() {
    int t_hour = hour;
    int tmp = 0;
    if ( (minute >= 0) & (minute < 3) ) { tmp = 0;}
    else if ( (minute >= 3) & (minute < 8) ) {  tmp = 1;}  
    else if ( (minute >= 8) & (minute < 13) ) { tmp = 2;}  
    else if ( (minute >= 13) & (minute < 18) ) { tmp = 3;}  
    else if ( (minute >= 18) & (minute < 23) ) { tmp = 4;}  
    else if ( (minute >= 23) & (minute < 28) ) { tmp = 5; t_hour++; }  
    else if ( (minute >= 28) & (minute < 33) ) { tmp = 6; t_hour++; }  
    else if ( (minute >= 33) & (minute < 38) ) { tmp = 7; t_hour++; }  
    else if ( (minute >= 38) & (minute < 43) ) { tmp = 8; t_hour++; }  
    else if ( (minute >= 43) & (minute < 48) ) { tmp = 9; t_hour++; }  
    else if ( (minute >= 48) & (minute < 53) ) { tmp = 10; t_hour++; }  
    else if ( (minute >= 53) & (minute < 60) ) { tmp = 11; t_hour++; }  
    else { }
    int sentence_id = ((hour%12)*12+tmp);  // this is correct?? should be t_hour?? TODO: test
    return sentence_id;
}

/*
based on the sentence ID, the array with the LEDs to be enabled is read from the PROGMEM
*/
void pixel_show_time(RgbColor col) {
  int sentence_id = getSentenceID();
  pixel_clear();
  int* tmp_array[plen];
  for(int i=0; i<plen; i++) {
      tmp_array[i] = pgm_read_word(&sentence[sentence_id][i]);
  }
  Serial.print("DEBUG: active LEDs ->");
  for(int i=0; i<plen; i++) {
      Serial.print((int)tmp_array[i]); Serial.print(",");
  }
  Serial.println("");
  for (int i=0; i<plen; i++) {
    strip.SetPixelColor(tmp_array[i], col);
  }
  strip.Show();
}

/*
Function to clear the pixel matrix to be rewritten. Called from pixel_show_time() before writing the new sentence
*/
void pixel_clear() {
  for(int counter = 0; counter < PixelCount; counter++) {
      strip.SetPixelColor(counter, black);
  }
  strip.Show();
}




/**
 * Additional functions for testing purpose
*/

/**
 * Animation functions / diagnosis purpose
*/
void animation_rgb_diagnosis() {
    Serial.println("INFO: running pixel diagnostics...");
    RgbColor diag_color[] = {{50,0,0},{0,50,0},{0,0,50}};
    for(int c=0; c<3; c++) {
        for(int i=0; i<110; i++) {
            strip.SetPixelColor(i, diag_color[c]);
            delay(10);
            strip.Show();
        }
    }
    Serial.println("INFO: pixel diagnositcs completed");
}

/*
Animation random blinking and vanishing letters
*/
void animation_blinking_star(int blinks) {
    pixel_clear();
    for(int i=0; i<blinks; i++) {
        strip.SetPixelColor(random(110), RgbColor(0,50,0));
        delay(10);
        strip.SetPixelColor(random(110), black);
        delay(10);
        strip.SetPixelColor(random(110), black);
        delay(100);
        strip.Show();
    }
}

/*
Prints the VW logo and keeps the logo for a defined time
*/
void animation_vw_logo() {
    Serial.println("INFO: Printing VW Logo animation ... ");
    pixel_clear();
    int vw_logo[] = {13,19,25,29,37,39,49,55,65,67,71,75,79,81,83,85,91,95};
    for(int k=0; k<3; k++) {
        for(int c=0; c<250; c=c+15) {
            for(int i=0;i<18;i++) {
                strip.SetPixelColor(vw_logo[i], RgbColor(0,(int)(c/2),c));
                strip.Show();
            }
        delay(1);
        }
        for(int c=250; c>16; c=c-15) {
            for(int i=0;i<18;i++) {
                strip.SetPixelColor(vw_logo[i], RgbColor(0,(int)(c/2),c));
                strip.Show();
            }
            delay(1);
        }
    }
    Serial.println("INFO: logo animation completed");
}