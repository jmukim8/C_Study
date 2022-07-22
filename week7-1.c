#include <stdio.h>

int main(void) 
{
  int a;

  scanf("%d", &a);

  if(a % 2 == 0 && a % 3 == 0)
  {
    printf("%d는 2와 3의 공배수다.\n",a);
  }
  else
  {
  	printf("%d는 2와 3의 공배수가 아니다.\n",a);
  }
  return 0;
}
42페이지,1-1
