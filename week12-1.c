#include <stdio.h>

int Sum(int n);

int Sum (int n)
{
  int i;
  int sum = 0;
  for(i = 1; i<= n; i++)
  {
    sum += i;
  }
  return sum;
}


int main()
{
  int n = 0;
  int sum = 0;
  printf("숫자를 입력하세요:");
  scanf("%d",&n);

  sum = Sum(n);
  printf("%d",sum);
}
