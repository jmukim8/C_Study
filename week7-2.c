#include <stdio.h>

int main(void) 
{
  int a;

  scanf("%d", &a);

  if(12 % a == 0 && 30 % a == 0)
  {
    printf("%d는 12와 30의 공약수다.\n",a);
  }
  else
  {
  	printf("%d는 12와 30의 공약수가 아니다.\n",a);
  }
  return 0;
}
//42페이지,문제1-2
