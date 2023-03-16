#ifndef SQUARE_MAX_112_AT_16384_1024INT8_H_
#define SQUARE_MAX_112_AT_16384_1024INT8_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"


#define SQUARE_MAX_112_AT_16384_1024_NUM_CELLS 1024
#define SQUARE_MAX_112_AT_16384_1024_SAMPLERATE 1024

CONSTTABLE_STORAGE(int8_t) SQUARE_MAX_112_AT_16384_1024_DATA [] = 
{
0, 30, 59, 84, 104, 117, 125, 127, 125, 119, 113, 106, 101, 98, 97, 99, 102, 105, 109, 112, 114, 115, 114, 112, 109, 106, 104, 102, 102, 103, 105, 107, 109, 
111, 112, 112, 111, 110, 108, 106, 105, 104, 104, 105, 106, 108, 109, 110, 111, 111, 110, 109, 108, 106, 105, 105, 105, 106, 107, 108, 109, 110, 110, 110, 109, 
109, 107, 106, 106, 105, 106, 106, 107, 108, 109, 109, 110, 110, 109, 108, 107, 107, 106, 106, 106, 106, 107, 108, 109, 109, 109, 109, 109, 108, 107, 107, 106, 
106, 106, 107, 107, 108, 109, 109, 109, 109, 108, 108, 107, 107, 106, 106, 106, 107, 108, 108, 109, 109, 109, 109, 108, 108, 107, 107, 106, 106, 107, 107, 108, 
108, 109, 109, 109, 109, 108, 108, 107, 107, 106, 106, 107, 107, 108, 108, 109, 109, 109, 109, 108, 108, 107, 107, 107, 107, 107, 107, 108, 108, 109, 109, 109, 
108, 108, 107, 107, 107, 107, 107, 107, 107, 108, 108, 109, 109, 109, 108, 108, 107, 107, 107, 107, 107, 107, 107, 108, 108, 109, 109, 109, 108, 108, 107, 107, 
107, 107, 107, 107, 108, 108, 108, 109, 109, 108, 108, 108, 107, 107, 107, 107, 107, 107, 108, 108, 108, 109, 109, 108, 108, 108, 107, 107, 107, 107, 107, 107, 
108, 108, 108, 109, 109, 108, 108, 108, 107, 107, 107, 107, 107, 107, 108, 108, 108, 109, 109, 108, 108, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 109, 
108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 108, 108, 109, 109, 108, 108, 108, 107, 107, 107, 107, 107, 107, 108, 108, 108, 109, 109, 108, 108, 108, 107, 
107, 107, 107, 107, 107, 108, 108, 108, 109, 109, 108, 108, 108, 107, 107, 107, 107, 107, 107, 108, 108, 108, 109, 109, 108, 108, 108, 107, 107, 107, 107, 107, 
107, 108, 108, 109, 109, 109, 108, 108, 107, 107, 107, 107, 107, 107, 107, 108, 108, 109, 109, 109, 108, 108, 107, 107, 107, 107, 107, 107, 107, 108, 108, 109, 
109, 109, 108, 108, 107, 107, 107, 107, 107, 107, 108, 108, 109, 109, 109, 109, 108, 108, 107, 107, 106, 106, 107, 107, 108, 108, 109, 109, 109, 109, 108, 108, 
107, 107, 106, 106, 107, 107, 108, 108, 109, 109, 109, 109, 108, 108, 107, 106, 106, 106, 107, 107, 108, 108, 109, 109, 109, 109, 108, 107, 107, 106, 106, 106, 
107, 107, 108, 109, 109, 109, 109, 109, 108, 107, 106, 106, 106, 106, 107, 107, 108, 109, 110, 110, 109, 109, 108, 107, 106, 106, 105, 106, 106, 107, 109, 109, 
110, 110, 110, 109, 108, 107, 106, 105, 105, 105, 106, 108, 109, 110, 111, 111, 110, 109, 108, 106, 105, 104, 104, 105, 106, 108, 110, 111, 112, 112, 111, 109, 
107, 105, 103, 102, 102, 104, 106, 109, 112, 114, 115, 114, 112, 109, 105, 102, 99, 97, 98, 101, 106, 113, 119, 125, 127, 125, 117, 104, 84, 59, 30, 0, 
-30, -59, -84, -104, -117, -125, -127, -125, -119, -113, -106, -101, -98, -97, -99, -102, -105, -109, -112, -114, -115, -114, -112, -109, -106, -104, -102, -102, -103, -105, -107, -109, 
-111, -112, -112, -111, -110, -108, -106, -105, -104, -104, -105, -106, -108, -109, -110, -111, -111, -110, -109, -108, -106, -105, -105, -105, -106, -107, -108, -109, -110, -110, -110, -109, 
-109, -107, -106, -106, -105, -106, -106, -107, -108, -109, -109, -110, -110, -109, -108, -107, -107, -106, -106, -106, -106, -107, -108, -109, -109, -109, -109, -109, -108, -107, -107, -106, 
-106, -106, -107, -107, -108, -109, -109, -109, -109, -108, -108, -107, -107, -106, -106, -106, -107, -108, -108, -109, -109, -109, -109, -108, -108, -107, -107, -106, -106, -107, -107, -108, 
-108, -109, -109, -109, -109, -108, -108, -107, -107, -106, -106, -107, -107, -108, -108, -109, -109, -109, -109, -108, -108, -107, -107, -107, -107, -107, -107, -108, -108, -109, -109, -109, 
-108, -108, -107, -107, -107, -107, -107, -107, -107, -108, -108, -109, -109, -109, -108, -108, -107, -107, -107, -107, -107, -107, -107, -108, -108, -109, -109, -109, -108, -108, -107, -107, 
-107, -107, -107, -107, -108, -108, -108, -109, -109, -108, -108, -108, -107, -107, -107, -107, -107, -107, -108, -108, -108, -109, -109, -108, -108, -108, -107, -107, -107, -107, -107, -107, 
-108, -108, -108, -109, -109, -108, -108, -108, -107, -107, -107, -107, -107, -107, -108, -108, -108, -109, -109, -108, -108, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -109, 
-108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -108, -108, -109, -109, -108, -108, -108, -107, -107, -107, -107, -107, -107, -108, -108, -108, -109, -109, -108, -108, -108, -107, 
-107, -107, -107, -107, -107, -108, -108, -108, -109, -109, -108, -108, -108, -107, -107, -107, -107, -107, -107, -108, -108, -108, -109, -109, -108, -108, -108, -107, -107, -107, -107, -107, 
-107, -108, -108, -109, -109, -109, -108, -108, -107, -107, -107, -107, -107, -107, -107, -108, -108, -109, -109, -109, -108, -108, -107, -107, -107, -107, -107, -107, -107, -108, -108, -109, 
-109, -109, -108, -108, -107, -107, -107, -107, -107, -107, -108, -108, -109, -109, -109, -109, -108, -108, -107, -107, -106, -106, -107, -107, -108, -108, -109, -109, -109, -109, -108, -108, 
-107, -107, -106, -106, -107, -107, -108, -108, -109, -109, -109, -109, -108, -108, -107, -106, -106, -106, -107, -107, -108, -108, -109, -109, -109, -109, -108, -107, -107, -106, -106, -106, 
-107, -107, -108, -109, -109, -109, -109, -109, -108, -107, -106, -106, -106, -106, -107, -107, -108, -109, -110, -110, -109, -109, -108, -107, -106, -106, -105, -106, -106, -107, -109, -109, 
-110, -110, -110, -109, -108, -107, -106, -105, -105, -105, -106, -108, -109, -110, -111, -111, -110, -109, -108, -106, -105, -104, -104, -105, -106, -108, -110, -111, -112, -112, -111, -109, 
-107, -105, -103, -102, -102, -104, -106, -109, -112, -114, -115, -114, -112, -109, -105, -102, -99, -97, -98, -101, -106, -113, -119, -125, -127, -125, -117, -104, -84, -59, -30, 
 };

#endif