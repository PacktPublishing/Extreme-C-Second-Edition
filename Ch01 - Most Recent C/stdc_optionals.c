/*
 * stdc_optionals.c
 * Chapter 12
 * Extreme C, 2nd Edition
 *
 * Check the C optional features
 *
 * Compile with:
 * 
 *    cc stdc_optionals.c -o stdc_optionals -std=c2x -pedantic
 *    cc stdc_optionals.c -o stdc_optionals -std=c11 -pedantic
 *    cc stdc_optionals.c -o stdc_optionals -std=c99 -pedantic
 *    cc stdc_optionals.c -o stdc_optionals -std=c89 -pedantic
 */

#include <stdio.h>
#include <stdlib.h>

#ifndef __STDC_NO_THREADS__
#include <threads.h>
#endif

#ifndef __STDC_NO_ATOMICS__
#include <stdatomic.h>
#endif

#ifndef __STDC_NO_COMPLEX__
#include <complex.h>
#endif

#include <fenv.h>
#include <math.h>
#include <stdint.h>
#include <tgmath.h>
#include <time.h>

#ifdef __STDC_VERSION_STDCKDINT_H__
#include <stdckdint.h>
#endif

#ifdef __STDC_VERSION_STDBIT_H__
#include <stdbit.h>
#endif


int main( int argc, char *argv[] ) {
  
  printf( "\nC99 optional features\n" );

  printf( "        __STDC_IEC_599__ " );
#ifdef __STDC_IEC_599__ 
  printf( "= %d\n" , __STDC_IEC_599__ );
#else
  printf( "... not defined.\n" );
#endif
  
  printf( " __STDC_IEC_599_COMPLX__ ");
#ifdef __STDC_IEC_599_COMPLX__
  printf( "= %d\n" , __STDC_IEC_599_COMPLX__ );
#else
  printf( "... not defined.\n" );
#endif

  printf( "         __STDC_HOSTED__ " );
#ifdef __STDC_HOSTED__
  printf( "= %d\n" , __STDC_HOSTED__ );
#else
  printf( "... not defined.\n" );
#endif

  printf( "      __STDC_ISO_10646__ " );
#ifdef __STDC_ISO_10646__
  printf( "= %d\n" , __STDC_ISO_10646__ );
#else
  printf( "... not defined.\n" );
#endif

  printf( "__STDC_MB_MIGHT_NEQ_WC__ " );
#ifdef __STDC_MB_MIGHT_NEQ_WC__
  printf( "= %d\n" , __STDC_MB_MIGHT_NEQ_WC__ );
#else
  printf( "... not defined.\n" );
#endif
  
  printf( "\nC11 optional feature\n" );

  printf( "         __STDC_UTF_16__ " );
#ifdef __STDC_UTF_16__
  printf( "= %d\n" , __STDC_UTF_16__ );
#else
  printf( "... not defined.\n" );
#endif

  printf( "         __STDC_UTF_32__ " );
#ifdef __STDC_UTF_32__
  printf( "= %d\n" , __STDC_UTF_32__ );
#else
  printf( "... not defined.\n" );
#endif

  printf( "     __STDC_ANALYZABLE__ " );
#ifdef __STDC_ANALYZABLE__
  printf( "= %d\n" , __STDC_ANALYZABLE__ );
#else
  printf( "... not defined.\n" );
#endif

  printf( "       __STDC_LIB_EXT1__ " );
#ifdef __STDC_LIB_EXT1__
  printf( "= %d\n" , __STDC_LIB_EXT1__ );
#else
  printf( "... not defined.\n" );
#endif

  printf( "     __STDC_NO_ATOMICS__ " );
#ifdef __STDC_NO_ATOMICS__
  printf( "= %d\n" , __STDC_NO_ATOMICS__ );
#else
  printf( "... not defined.\n" );
#endif

  printf( "     __STDC_NO_COMPLEX__ " );
#ifdef __STDC_NO_COMPLEX__
  printf( "= %d\n" , __STDC_NO_ATOMICS__ );
#else
  printf( "... not defined.\n" );
#endif

  printf( "     __STDC_NO_THREADS__ " );
#ifdef __STDC_NO_THREADS__
  printf( "= %d\n" , __STDC_NO_THREADS__ );
#else
  printf( "... not defined.\n" );
#endif

  printf( "         __STDC_NO_VLA__ " );
#ifdef __STDC_NO_VLA__
  printf( "= %d\n" , __STDC_NO_VLA__ );
#else
  printf( "... not defined.\n" );
#endif
  
  printf( "\nC23 optional feature flags\n" );

  printf( "     __STDC_VERSION_FENV_H__ " );
#ifdef __STDC_VERSION_FENV_H__
  printf( "= %d\n" , __STDC_VERSION_FENV_H__ );
#else
  printf( "... not defined.\n" );
#endif

  printf( "     __STDC_VERSION_MATH_H__ " );
#ifdef __STDC_VERSION_MATH_H__
  printf( "= %d\n" , __STDC_VERSION_MATH_H__ );
#else
  printf( "... not defined.\n" );
#endif

  printf( "   __STDC_VERSION_STDINT_H__ " );
#ifdef __STDC_VERSION_STDINT_H__
  printf( "= %d\n" , __STDC_VERSION_STDINT_H__ );
#else
  printf( "... not defined.\n" );
#endif

  printf( "   __STDC_VERSION_TGMATH_H__ " );
#ifdef __STDC_VERSION_TGMATH_H__
  printf( "= %d\n" , __STDC_VERSION_TGMATH_H__ );
#else
  printf( "... not defined.\n" );
#endif

  printf( "     __STDC_VERSION_TIME_H__ " );
#ifdef __STDC_VERSION_TIME_H__
  printf( "= %d\n" , __STDC_VERSION_TIME_H__ );
#else
  printf( "... not defined.\n" );
#endif

  printf( "__STDC_VERSION_STDCKDINT_H__ " );
#ifdef __STDC_VERSION_STDCKDINT_H__
  printf( "= %d\n" , __STDC_VERSION_STDCKDINT_H__ );
#else
  printf( "... not defined.\n" );
#endif

  printf( "   __STDC_VERSION_STDBIT_H__ " );
#ifdef __STDC_VERSION_STDBIT_H__
  printf( "= %d\n" , __STDC_VERSION_STDBIT_H__ );
#else
  printf( "... not defined.\n" );
#endif

  printf( "       __STDC_IEC_60559_BF__ " );
#ifdef __STDC_IEC_60559_BF__
  printf( "= %d\n" , __STDC_IEC_60559_BF__ );
#else
  printf( "... not defined.\n" );
#endif

  printf( "      __STDC_IEC_60559_DFP__ " );
#ifdef __STDC_IEC_60559_DFP__
  printf( "= %d\n" , __STDC_IEC_60559_DFP__ );
#else
  printf( "... not defined.\n" );
#endif

  printf( "  __STDC_IEC_60559_COMPLEX__ " );
#ifdef __STDC_IEC_60559_COMPLEX__
  printf( "= %d\n" , __STDC_IEC_60559_COMPLEX__ );
#else
  printf( "... not defined.\n" );
#endif

  printf( "    __STDC_IEC_60559_TYPES__ " );
#ifdef __STDC_IEC_60559_TYPES__
  printf( "= %d\n" , __STDC_IEC_60559_TYPES__ );
#else
  printf( "... not defined.\n" );
#endif

  return 0;
}