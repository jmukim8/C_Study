#include <stdio.h>

int main(void) 
{
  int n;
  
  printf("자연수입력:");
  scanf("%d", &n);

  if (n % 2 == 0 && n <= 10)
  {
    printf("짝수");
  }
  if (n % 2 == 1 && n <= 10)
  {
    printf("홀수");
  }
  else if(n > 10)
  {
    printf("자연수");
  }
  return 0;
}
28페이지,1
