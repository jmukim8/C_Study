#include <stdio.h>

int main(void) 
{
  int n,e;
  
  for(n = 5; n > 0; n--)
  {
    for(e = n; e > 0; e--)
    {
      printf("*");
    }    
    printf("\n");
  }
  return 0;
}
