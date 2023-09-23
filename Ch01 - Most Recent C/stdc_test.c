/*
 * stdc_version.c
 * Chapter 12
 * Extreme C, 2nd Edition
 *
 * Check the C standard version
 *
 * Compile with:
 * 1. get default version:
 *    cc version_version.c -o version_version
 *
 * 2. choose which version to compile with
 *    cc stdc_version.c -o stdc_version -std=c23
 *    cc stdc_version.c -o stdc_version -std=c2x
 *    cc stdc_version.c -o stdc_version -std=c18
 *    cc stdc_version.c -o stdc_version -std=c17
 *    cc stdc_version.c -o stdc_version -std=c11
 *    cc stdc_version.c -o stdc_version -std=c99
 *    cc stdc_version.c -o stdc_version -std=c89
 *
 * 3. if you are feeling adventurous, perform (2) again but for each 
 *    compilation, add the -pedantic switch
 */


// A c++ single-line comment 
// Use the -pendantic option for strict standards conformance


#include <stdio.h> 


int main( int argc, char** argv ) {

#if __STDC_VERSION__ >= 202311L 
  printf( "Hello World from C23!\n" );  
#elif __STDC_VERSION__ >= 202000L 
  printf( "Hello World from C2x (aka C23)!\n" ); 
#elif __STDC_VERSION__ >= 201710L 
  printf( "Hello World from C17 (aka C18)!\n" ); 
#elif __STDC_VERSION__ >= 201112L 
  printf( "Hello World from C11!\n" ); 
#elif __STDC_VERSION__ >= 199901L 
  printf( "Hello World from C99!\n" ); 
#else 
  printf( "Hello World from ANSI C (C89/C90)!\n" ); 
#endif
  
  return 0; 
} 


/* eof */
