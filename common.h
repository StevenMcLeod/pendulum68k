#ifndef COMMON_H#define COMMON_Hstruct PSTRUCT {	Byte len;	Byte str[];};#define HIWORD(x) (((x) & 0xFFFF0000) >> 16)#define LOWORD(x) ((x) & 0x0000FFFF)#define TO_PSTRUCT(x) (* (struct PSTRUCT *) (x))#define PLEN(x) (TO_PSTRUCT(x).len)#define PSTR(x) (TO_PSTRUCT(x).str)#ifndef M_PI#define M_PI 3.1415926535897932#endif#endif