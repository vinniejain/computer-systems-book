#include <stdio.h>

int main ( ) {

  int x = -1;
  unsigned y = 0;
  if ( x > (int) y ) {
    printf( "x is greater than y" ); //this executes!
  } else {
    printf( "x is less than y" );
  }
  printf( "\n" );

  return 1;
}
