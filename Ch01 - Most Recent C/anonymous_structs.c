/*
 * anonymous_structs.c
 * Chapter 1
 * Extreme C, 2nd Edition
 *
 * Demonstrate anonymous structs and unions
 *
 * Compile with:
 *  clang anonymous_structs.c -o anonymous_structs -Werror -Wall
 */
  

#include <stdio.h>


typedef struct {
  union {           // anonymous union
    struct {        // anonymous structure
      int x;
      int y;
    };
    int data[2];
  };
} point_t;


int main( void  ) {
  point_t p;
  p.x = 10;
  p.data[1] = -5;
  
  printf( "Point (%d, %d) using an anonymous structure"
          " inside an anonymous union.\n", 
          p.x, p.y );
  printf( "Point (%d, %d) using integer array inside an"
          "anonymous union.\n", 
          p.data[0], p.data[1]);
  
  return 0;
}

/* eof */
