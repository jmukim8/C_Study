#include <stdio.h>

int main(void) {

  int n;
  
  printf("자연수 입력:");
  scanf("%d",&n);
  switch (n % 3)
  {
    case 0:
      printf("삼의 배수가 맞음");break;
    default:
      printf("삼의 배수가 아님");break;
  }
  return 0;
}
//23페이지
