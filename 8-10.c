#include <stdio.h>
 
int main()
{
  int n;
  
  printf("구구단 입력:");
  scanf("%d", &n);
  for (int j = 1; j <= 9; j++)
  {
     printf("%d x %d = %d\n", n, j, n*j);
  }
 
  return 0;
}
