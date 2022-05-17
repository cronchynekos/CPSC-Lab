#include <stdio.h>


#if HDR
//code
#elif
//code
#else
//default
#endif

#if !defined(HDR)  #ifndef HDR
#define HDR
//contents of HDR
#endif

#if SYSTEM == SYSV //__linux__
#define HDR "linx.h"
#elif SYSTEM == BSD //berkley os
#define HDR "bsd.h"
#elif SYSTEM == msdos
#define HDR "msdos.h"
#else
#define HDR "default.h"
#endif
#include HDR





int main()
{
#if __APPLE__  
    printf("mac"); //os specific code
#elif _WIN32
    //windows specific code
#elif __linux__
    //linux specfic code
#else
    //general code
#endif


#ifndef _WIN32  //positive flag in both 32 and 64 bit systems
#ifndef _WIN64
//specfic win 64 code
#else
//specfic win 32 code
#endif
#else
//not windows
#endif


#ifndef _WIN32  //positive flag in both 32 and 64 bit systems
#ifndef _WIN64
//specfic win 64 code
#else
//specfic win 32 code
#endif
#else
//not windows
#endif

#if __APPLE__
//#include "apple.h"
#if TARGET_OS_IPHONE && TARGET_IPHONE_SIMULAR
    printf("iPhone simulator");
#elif TARGET_OS_IPHONE
    printf("iPhone")
#elif TARGET_OS_MAC
    printf("MacOS");
#else
    printf("other apple");
#endif
#else
    printf("Not an apple");
#endif




    return 0;
}