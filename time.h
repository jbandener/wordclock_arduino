 #include <avr/pgmspace.h>

 const static int sentence[144][23] PROGMEM= {{ 0, 1, 3, 4, 5,94,95,96,97,98,107,108,109,0,0,0,0,0,0,0,0,0,0}, //Es ist zwoelf uhr
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,40,41,42,43,94,95,96,97,98, 0, 0, 0, 0, 0}, //Es ist fuenf nach zwoelf
                          { 0, 1, 3, 4, 5,11,12,13,14,40,41,42,43,94,95,96,97,98, 0, 0, 0, 0, 0}, //Es ist zehn nach zwoelf
                          { 0, 1, 3, 4, 5,26,27,28,29,30,31,32,40,41,42,43,94,95,96,97,98, 0, 0}, //Es ist viertel nach zwoelf
                          { 0, 1, 3, 4, 5,15,16,17,18,19,20,21,40,41,42,43,94,95,96,97,98, 0, 0}, //Es ist zwanzig nach zwoelf
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,33,34,35,44,45,46,47,55,56,57,58, 0, 0, 0}, //Es ist fuenf vor halb eins
                          { 0, 1, 3, 4, 5,44,45,46,47,55,56,57,58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //Es ist halb eins
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,40,41,42,43,44,45,46,47,55,56,57,58, 0, 0}, //Es ist fuenf nach halb eins
                          { 0, 1, 3, 4, 5,15,16,17,18,19,20,21,33,34,35,55,56,57,58, 0, 0, 0, 0}, //Es ist zwanzig vor eins
                          { 0, 1, 3, 4, 5,26,27,28,29,30,31,32,33,34,35,55,56,57,58, 0, 0, 0, 0}, //Es ist viertel vor eins
                          { 0, 1, 3, 4, 5,11,12,13,14,33,34,35,55,56,57,58, 0, 0, 0, 0, 0, 0, 0}, //Es ist zehn vor eins                                    
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,33,34,35,55,56,57,58, 0, 0, 0, 0, 0, 0, 0}, //Es ist fuenf vor eins
                          //----------------------------------------
                          { 0, 1, 3, 4, 5,55,56,57,107,108,109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //Es ist ein uhr
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,40,41,42,43,55,56,57,58, 0, 0, 0, 0, 0, 0}, //Es ist fuenf nach eins
                          { 0, 1, 3, 4, 5,11,12,13,14,40,41,42,43,55,56,57,58, 0, 0, 0, 0, 0, 0}, //Es ist zehn nach eins
                          { 0, 1, 3, 4, 5,26,27,28,29,30,31,32,40,41,42,43,55,56,57,58, 0, 0, 0}, //Es ist viertel nach eins
                          { 0, 1, 3, 4, 5,15,16,17,18,19,20,21,40,41,42,43,55,56,57,58, 0, 0, 0}, //Es ist zwanzig nach eins
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,33,34,35,44,45,46,47,62,63,64,65, 0, 0, 0}, //Es ist fuenf vor halb zwei
                          { 0, 1, 3, 4, 5,44,45,46,47,62,63,64,65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //Es ist halb zwei
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,40,41,42,43,44,45,46,47,62,63,64,65, 0, 0}, //Es ist fuenf nach halb zwei
                          { 0, 1, 3, 4, 5,15,16,17,18,19,20,21,33,34,35,62,63,64,65, 0, 0, 0, 0}, //Es ist zwanzig vor zwei
                          { 0, 1, 3, 4, 5,26,27,28,29,30,31,32,33,34,35,62,63,64,65, 0, 0, 0, 0}, //Es ist viertel vor zwei
                          { 0, 1, 3, 4, 5,11,12,13,14,33,34,35,62,63,64,65, 0, 0, 0, 0, 0, 0, 0}, //Es ist zehn vor zwei
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,33,34,35,62,63,64,65, 0, 0, 0, 0, 0, 0, 0}, //Es ist fuenf vor zwei
                          //----------------------------------------
                          { 0, 1, 3, 4, 5,62,63,64,65,107,108,109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //Es ist zwei uhr
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,40,41,42,43,62,63,64,65, 0, 0, 0, 0, 0, 0}, //Es ist fuenf nach zwei
                          { 0, 1, 3, 4, 5,11,12,13,14,40,41,42,43,62,63,64,65, 0, 0, 0, 0, 0, 0}, //Es ist zehn nach zwei
                          { 0, 1, 3, 4, 5,26,27,28,29,30,31,32,40,41,42,43,62,63,64,65, 0, 0, 0}, //Es ist viertel nach zwei
                          { 0, 1, 3, 4, 5,15,16,17,18,19,20,21,40,41,42,43,62,63,64,65, 0, 0, 0}, //Es ist zwanzig nach zwei
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,33,34,35,44,45,46,47,66,67,68,69, 0, 0, 0}, //Es ist fuenf vor halb drei
                          { 0, 1, 3, 4, 5,44,45,46,47,66,67,68,69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //Es ist halb drei
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,40,41,42,43,44,45,46,47,66,67,68,69, 0, 0}, //Es ist fuenf nach halb drei
                          { 0, 1, 3, 4, 5,15,16,17,18,19,20,21,33,34,35,66,67,68,69, 0, 0, 0, 0}, //Es ist zwanzig vor drei
                          { 0, 1, 3, 4, 5,26,27,28,29,30,31,32,33,34,35,66,67,68,69, 0, 0, 0, 0}, //Es ist viertel vor drei
                          { 0, 1, 3, 4, 5,11,12,13,14,33,34,35,66,67,68,69, 0, 0, 0, 0, 0, 0, 0}, //Es ist zehn vor drei
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,33,34,35,66,67,68,69, 0, 0, 0, 0, 0, 0, 0}, //Es ist fuenf vor drei
                          //----------------------------------------
                          { 0, 1, 3, 4, 5,66,67,68,69,107,108,109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //Es ist drei uhr
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,40,41,42,43,66,67,68,69, 0, 0, 0, 0, 0, 0}, //Es ist fuenf nach drei
                          { 0, 1, 3, 4, 5,11,12,13,14,40,41,42,43,66,67,68,69, 0, 0, 0, 0, 0, 0}, //Es ist zehn nach drei
                          { 0, 1, 3, 4, 5,26,27,28,29,30,31,32,40,41,42,43,66,67,68,69, 0, 0, 0}, //Es ist viertel nach drei
                          { 0, 1, 3, 4, 5,15,16,17,18,19,20,21,40,41,42,43,66,67,68,69, 0, 0, 0}, //Es ist zwanzig nach drei
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,33,34,35,44,45,46,47,73,74,75,76, 0, 0, 0}, //Es ist fuenf vor halb vier
                          { 0, 1, 3, 4, 5,44,45,46,47,73,74,75,76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //Es ist halb vier
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,40,41,42,43,44,45,46,47,73,74,75,76, 0, 0}, //Es ist fuenf nach halb vier
                          { 0, 1, 3, 4, 5,15,16,17,18,19,20,21,33,34,35,73,74,75,76, 0, 0, 0, 0}, //Es ist zwanzig vor vier
                          { 0, 1, 3, 4, 5,26,27,28,29,30,31,32,33,34,35,73,74,75,76, 0, 0, 0, 0}, //Es ist viertel vor vier
                          { 0, 1, 3, 4, 5,11,12,13,14,33,34,35,73,74,75,76, 0, 0, 0, 0, 0, 0, 0}, //Es ist zehn vor vier
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,33,34,35,73,74,75,76, 0, 0, 0, 0, 0, 0, 0}, //Es ist fuenf vor vier
                          //----------------------------------------
                          { 0, 1, 3, 4, 5,73,74,75,76,107,108,109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //Es ist vier uhr
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,40,41,42,43,73,74,75,76, 0, 0, 0, 0, 0, 0}, //Es ist fuenf nach vier
                          { 0, 1, 3, 4, 5,11,12,13,14,40,41,42,43,73,74,75,76, 0, 0, 0, 0, 0, 0}, //Es ist zehn nach vier
                          { 0, 1, 3, 4, 5,26,27,28,29,30,31,32,40,41,42,43,73,74,75,76, 0, 0, 0}, //Es ist viertel nach vier
                          { 0, 1, 3, 4, 5,15,16,17,18,19,20,21,40,41,42,43,73,74,75,76, 0, 0, 0}, //Es ist zwanzig nach vier
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,33,34,35,44,45,46,47,51,52,53,54, 0, 0, 0}, //Es ist fuenf vor halb fuenf
                          { 0, 1, 3, 4, 5,44,45,46,47,51,52,53,54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //Es ist halb fuenf
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,40,41,42,43,44,45,46,47,51,52,53,54, 0, 0}, //Es ist fuenf nach halb fuenf
                          { 0, 1, 3, 4, 5,15,16,17,18,19,20,21,33,34,35,51,52,53,54, 0, 0, 0, 0}, //Es ist zwanzig vor fuenf
                          { 0, 1, 3, 4, 5,26,27,28,29,30,31,32,33,34,35,51,52,53,54, 0, 0, 0, 0}, //Es ist viertel vor fuenf
                          { 0, 1, 3, 4, 5,11,12,13,14,33,34,35,51,52,53,54, 0, 0, 0, 0, 0, 0, 0}, //Es ist zehn vor fuenf
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,33,34,35,51,52,53,54, 0, 0, 0, 0, 0, 0, 0}, //Es ist fuenf vor fuenf
                          //----------------------------------------
                          { 0, 1, 3, 4, 5,51,52,53,54,107,108,109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //Es ist fuenf uhr
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,40,41,42,43,51,52,53,54, 0, 0, 0, 0, 0, 0}, //Es ist fuenf nach fuenf
                          { 0, 1, 3, 4, 5,11,12,13,14,40,41,42,43,51,52,53,54, 0, 0, 0, 0, 0, 0}, //Es ist zehn nach fuenf
                          { 0, 1, 3, 4, 5,26,27,28,29,30,31,32,40,41,42,43,51,52,53,54, 0, 0, 0}, //Es ist viertel nach fuenf
                          { 0, 1, 3, 4, 5,15,16,17,18,19,20,21,40,41,42,43,51,52,53,54, 0, 0, 0}, //Es ist zwanzig nach fuenf
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,33,34,35,44,45,46,47,77,78,79,80,81, 0, 0}, //Es ist fuenf vor halb sechs
                          { 0, 1, 3, 4, 5,44,45,46,47,77,78,79,80,81, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //Es ist halb sechs
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,40,41,42,43,44,45,46,47,77,78,79,80,81, 0}, //Es ist fuenf nach halb sechs
                          { 0, 1, 3, 4, 5,15,16,17,18,19,20,21,33,34,35,77,78,79,80,81, 0, 0, 0}, //Es ist zwanzig vor sechs
                          { 0, 1, 3, 4, 5,26,27,28,29,30,31,32,33,34,35,77,78,79,80,81, 0, 0, 0}, //Es ist viertel vor sechs
                          { 0, 1, 3, 4, 5,11,12,13,14,33,34,35,77,78,79,80,81, 0, 0, 0, 0, 0, 0}, //Es ist zehn vor sechs
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,33,34,35,77,78,79,80,81, 0, 0, 0, 0, 0, 0}, //Es ist fuenf vor sechs
                          //----------------------------------------
                          { 0, 1, 3, 4, 5,77,78,79,80,81,107,108,109, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //Es ist sechs uhr
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,40,41,42,43,77,78,79,80,81, 0, 0, 0, 0, 0}, //Es ist fuenf nach sechs
                          { 0, 1, 3, 4, 5,11,12,13,14,40,41,42,43,77,78,79,80,81, 0, 0, 0, 0, 0}, //Es ist zehn nach sechs
                          { 0, 1, 3, 4, 5,26,27,28,29,30,31,32,40,41,42,43,77,78,79,80,81, 0, 0}, //Es ist viertel nach sechs
                          { 0, 1, 3, 4, 5,15,16,17,18,19,20,21,40,41,42,43,77,78,79,80,81, 0, 0}, //Es ist zwanzig nach sechs
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,33,34,35,44,45,46,47,88,89,90,91,92,93, 0}, //Es ist fuenf vor halb sieben
                          { 0, 1, 3, 4, 5,44,45,46,47,88,89,90,91,92,93, 0, 0, 0, 0, 0, 0, 0, 0}, //Es ist halb sieben
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,40,41,42,43,44,45,46,47,88,89,90,91,92,93}, //Es ist fuenf nach halb sieben
                          { 0, 1, 3, 4, 5,15,16,17,18,19,20,21,33,34,35,88,89,90,91,92,93, 0, 0}, //Es ist zwanzig vor sieben
                          { 0, 1, 3, 4, 5,26,27,28,29,30,31,32,33,34,35,88,89,90,91,92,93, 0, 0}, //Es ist viertel vor sieben
                          { 0, 1, 3, 4, 5,11,12,13,14,33,34,35,88,89,90,91,92,93, 0, 0, 0, 0, 0}, //Es ist zehn vor sieben
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,33,34,35,88,89,90,91,92,93, 0, 0, 0, 0, 0}, //Es ist fuenf vor sieben
                          //----------------------------------------
                          { 0, 1, 3, 4, 5,88,89,90,91,92,93,107,108,109, 0, 0, 0, 0, 0, 0, 0, 0}, //Es ist sieben uhr
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,40,41,42,43,88,89,90,91,92,93, 0, 0, 0, 0}, //Es ist fuenf nach sieben
                          { 0, 1, 3, 4, 5,11,12,13,14,40,41,42,43,88,89,90,91,92,93, 0, 0, 0, 0}, //Es ist zehn nach sieben
                          { 0, 1, 3, 4, 5,26,27,28,29,30,31,32,40,41,42,43,88,89,90,91,92,93, 0}, //Es ist viertel nach sieben
                          { 0, 1, 3, 4, 5,15,16,17,18,19,20,21,40,41,42,43,88,89,90,91,92,93, 0}, //Es ist zwanzig nach sieben
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,33,34,35,44,45,46,47,84,85,86,87, 0, 0, 0}, //Es ist fuenf vor halb acht
                          { 0, 1, 3, 4, 5,44,45,46,47,84,85,86,87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //Es ist halb acht
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,40,41,42,43,44,45,46,47,84,85,86,87, 0, 0}, //Es ist fuenf nach halb acht
                          { 0, 1, 3, 4, 5,15,16,17,18,19,20,21,33,34,35,84,85,86,87, 0, 0, 0, 0}, //Es ist zwanzig vor acht
                          { 0, 1, 3, 4, 5,26,27,28,29,30,31,32,33,34,35,84,85,86,87, 0, 0, 0, 0}, //Es ist viertel vor acht
                          { 0, 1, 3, 4, 5,11,12,13,14,33,34,35,84,85,86,87, 0, 0, 0, 0, 0, 0, 0}, //Es ist zehn vor acht
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,33,34,35,84,85,86,87, 0, 0, 0, 0, 0, 0, 0}, //Es ist fuenf vor acht
                          //----------------------------------------
                          { 0, 1, 3, 4, 5,84,85,86,87,107,108,109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //Es ist acht uhr
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,40,41,42,43,84,85,86,87, 0, 0, 0, 0, 0, 0}, //Es ist fuenf nach acht
                          { 0, 1, 3, 4, 5,11,12,13,14,40,41,42,43,84,85,86,87, 0, 0, 0, 0, 0, 0}, //Es ist zehn nach acht
                          { 0, 1, 3, 4, 5,26,27,28,29,30,31,32,40,41,42,43,84,85,86,87, 0, 0, 0}, //Es ist viertel nach acht
                          { 0, 1, 3, 4, 5,15,16,17,18,19,20,21,40,41,42,43,84,85,86,87, 0, 0, 0}, //Es ist zwanzig nach acht
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,33,34,35,44,45,46,47,102,103,104,105, 0, 0, 0}, //Es ist fuenf vor halb neun
                          { 0, 1, 3, 4, 5,44,45,46,47,102,103,104,105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //Es ist halb neun
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,40,41,42,43,44,45,46,47,102,103,104,105, 0, 0}, //Es ist fuenf nach halb neun
                          { 0, 1, 3, 4, 5,15,16,17,18,19,20,21,33,34,35,102,103,104,105, 0, 0, 0, 0}, //Es ist zwanzig vor neun
                          { 0, 1, 3, 4, 5,26,27,28,29,30,31,32,33,34,35,102,103,104,105, 0, 0, 0, 0}, //Es ist viertel vor neun
                          { 0, 1, 3, 4, 5,11,12,13,14,33,34,35,102,103,104,105, 0, 0, 0, 0, 0, 0, 0}, //Es ist zehn vor neun
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,33,34,35,102,103,104,105, 0, 0, 0, 0, 0, 0, 0}, //Es ist fuenf vor neun
                          //----------------------------------------
                          { 0, 1, 3, 4, 5,102,103,104,105,107,108,109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //Es ist neun uhr
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,40,41,42,43,102,103,104,105, 0, 0, 0, 0, 0, 0}, //Es ist fuenf nach neun
                          { 0, 1, 3, 4, 5,11,12,13,14,40,41,42,43,102,103,104,105, 0, 0, 0, 0, 0, 0}, //Es ist zehn nach neun
                          { 0, 1, 3, 4, 5,26,27,28,29,30,31,32,40,41,42,43,102,103,104,105, 0, 0, 0}, //Es ist viertel nach neun
                          { 0, 1, 3, 4, 5,15,16,17,18,19,20,21,40,41,42,43,102,103,104,105, 0, 0, 0}, //Es ist zwanzig nach neun
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,33,34,35,44,45,46,47,99,100,101,102, 0, 0, 0}, //Es ist fuenf vor halb zehn
                          { 0, 1, 3, 4, 5,44,45,46,47,99,100,101,102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //Es ist halb zehn
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,40,41,42,43,44,45,46,47,99,100,101,102, 0, 0}, //Es ist fuenf nach halb zehn
                          { 0, 1, 3, 4, 5,15,16,17,18,19,20,21,33,34,35,99,100,101,102, 0, 0, 0, 0}, //Es ist zwanzig vor zehn
                          { 0, 1, 3, 4, 5,26,27,28,29,30,31,32,33,34,35,99,100,101,102, 0, 0, 0, 0}, //Es ist viertel vor zehn
                          { 0, 1, 3, 4, 5,11,12,13,14,33,34,35,99,100,101,102, 0, 0, 0, 0, 0, 0, 0}, //Es ist zehn vor zehn
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,33,34,35,99,100,101,102, 0, 0, 0, 0, 0, 0, 0}, //Es ist fuenf vor zehn
                          //----------------------------------------
                          { 0, 1, 3, 4, 5,99,100,101,102,107,108,109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //Es ist zehn uhr
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,40,41,42,43,99,100,101,102, 0, 0, 0, 0, 0, 0}, //Es ist fuenf nach zehn
                          { 0, 1, 3, 4, 5,11,12,13,14,40,41,42,43,99,100,101,102, 0, 0, 0, 0, 0, 0}, //Es ist zehn nach zehn
                          { 0, 1, 3, 4, 5,26,27,28,29,30,31,32,40,41,42,43,99,100,101,102, 0, 0, 0}, //Es ist viertel nach zehn
                          { 0, 1, 3, 4, 5,15,16,17,18,19,20,21,40,41,42,43,99,100,101,102, 0, 0, 0}, //Es ist zwanzig nach zehn
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,33,34,35,44,45,46,47,49,50,51, 0, 0, 0, 0}, //Es ist fuenf vor halb elf
                          { 0, 1, 3, 4, 5,44,45,46,47,49,50,51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //Es ist halb elf
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,40,41,42,43,44,45,46,47,49,50,51, 0, 0, 0}, //Es ist fuenf nach halb elf
                          { 0, 1, 3, 4, 5,15,16,17,18,19,20,21,33,34,35,49,50,51, 0, 0, 0, 0, 0}, //Es ist zwanzig vor elf
                          { 0, 1, 3, 4, 5,26,27,28,29,30,31,32,33,34,35,49,50,51, 0, 0, 0, 0, 0}, //Es ist viertel vor elf
                          { 0, 1, 3, 4, 5,11,12,13,14,33,34,35,49,50,51, 0, 0, 0, 0, 0, 0, 0, 0}, //Es ist zehn vor elf
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,33,34,35,49,50,51, 0, 0, 0, 0, 0, 0, 0, 0}, //Es ist fuenf vor elf
                          //----------------------------------------
                          { 0, 1, 3, 4, 5,49,50,51,107,108,109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //Es ist elf uhr
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,40,41,42,43,49,50,51, 0, 0, 0, 0, 0, 0, 0}, //Es ist fuenf nach elf
                          { 0, 1, 3, 4, 5,11,12,13,14,40,41,42,43,49,50,51, 0, 0, 0, 0, 0, 0, 0}, //Es ist zehn nach elf
                          { 0, 1, 3, 4, 5,26,27,28,29,30,31,32,40,41,42,43,49,50,51, 0, 0, 0, 0}, //Es ist viertel nach elf
                          { 0, 1, 3, 4, 5,15,16,17,18,19,20,21,40,41,42,43,49,50,51, 0, 0, 0, 0}, //Es ist zwanzig nach elf
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,33,34,35,44,45,46,47,94,95,96,97,98, 0, 0}, //Es ist fuenf vor halb zwoelf
                          { 0, 1, 3, 4, 5,44,45,46,47,94,95,96,97,98, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //Es ist halb zwoelf
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,40,41,42,43,44,45,46,47,94,95,96,97,98, 0}, //Es ist fuenf nach halb zwoelf
                          { 0, 1, 3, 4, 5,15,16,17,18,19,20,21,33,34,35,94,95,96,97,98, 0, 0, 0}, //Es ist zwanzig vor zwoelf
                          { 0, 1, 3, 4, 5,26,27,28,29,30,31,32,33,34,35,94,95,96,97,98, 0, 0, 0}, //Es ist viertel vor zwoelf
                          { 0, 1, 3, 4, 5,11,12,13,14,33,34,35,94,95,96,97,98, 0, 0, 0, 0, 0, 0}, //Es ist zehn vor zwoelf
                          { 0, 1, 3, 4, 5, 7, 8, 9,10,33,34,35,94,95,96,97,98, 0, 0, 0, 0, 0, 0}, //Es ist fuenf vor zwoelf
                          //----------------------------------------
                          };