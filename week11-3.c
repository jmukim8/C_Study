#include <stdio.h>

int main(void) 
{
  int i,j;
  
  for(i = 6; i >= 1; i--)
  {
    printf("%d학년 ", i);
    for(j = 1; j <= 7; j++)
    {
      printf("%d반 ", j);
    }    
    printf("\n");
  }
  return 0;
}
//39페이지
