#include <stdio.h>

int main(void) 
{
  int a = 12;
  int b = 3;

  a -= 3,b += 1;
  printf("a = %d b = %d\n", a, b);
  a /= 3,b -= 1;
  printf("a = %d b = %d\n", a, b);
  a *= 2,b += 1;
  printf("a = %d b = %d\n", a, b);
  a /= 6,b += 1;
  printf("a = %d b = %d\n", a, b);
  a *= 5,b -= 1;
  printf("a = %d b = %d\n", a, b);
  
}
페이지26,문제1
