#include <stdio.h>

int main()
{
  int i = 0 ; // initialize variable i
  int j = 0;  // initialize variable i
  
  for( i = 0; i < 11; i++ ) // loop from 0 to 10
      for( j = 0; j < i; j++ ) // loop from 0 to i-1
        printf("hello world\n"); // print something to verify that it works
  
  return 1; // exit with sucessful return code(1)
}
