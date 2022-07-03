#ifdef __AVR__
#include <avr/pgmspace.h>
#define USEPRECALC
#elif defined(__xtensa__) 
#   include <pgmspace.h>
#   ifndef __LPM
#       define __LPM(x) *x
#   endif
#else 
#define PROGMEM
#define memcpy_P memcpy
#define __LPM(x) *x
#define pgm_read_word(x) *x
#endif


extern unsigned char strinbuf[];
extern unsigned char qrframe[];

extern unsigned char  WD, WDB;
#include "qrbits.h"

#ifdef __cplusplus
extern "C"{
#endif
// strinbuf in, qrframe out
void qrencode(void);
#ifdef __cplusplus
} // extern "C"
#endif


