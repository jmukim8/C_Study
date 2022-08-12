#include <stdio.h>

int main(void) 
{
  int n;
  int day=0;

  for(n = 15; n > 0; n = n+3)
  {
    n = n-4;
    day ++;
  }
  printf("%d",day);
  return 0;
}
58페이지,6문제
