#include <stdio.h>

int main(void) 
{
  int a = 10;
  int b = 2;

  a -= b;
  printf("a = %d\n", a);
  a *= 2;
  printf("a = %d\n", a);
  a--;
  printf("a = %d\n", a);
  a /= a;
  printf("a = %d\n", a);
  a += 2;
  printf("a = %d\n", a);
  a ++;
  printf("a = %d\n", a);
  a /= 2;
  printf("a = %d\n", a);
}
23
