#include <stdio.h>

int main()
{
  int i = 0 ;
  int j = 0;
  
  for( i = 0; i < 11; i++ )
      for( j = 0; j < i; j++ )
        printf("hello world\n");
  
  return 1;
}
