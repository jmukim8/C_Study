#include <stdio.h>

int main(void) 
{
  float n;
  int day=0;

  n = -19.40;
  while(n < 0)
  {
    n = n+3;
    n = n-2;
    day++;
  }
  printf("%d",day);
  return 0;
}
16페이지,문제1
