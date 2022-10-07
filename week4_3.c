#include <stdio.h>

int main(void) {
  int num1;
  int num2;
  int num3;
  int total;
  float average;
  
  scanf("%d %d %d", &num1, &num2, &num3);
  total = num1 + num2 + num3;
  average = total / 3;
  printf("%d\n", total);
  printf("%.2f", average);
  return 0;
  //codeup 1046
}
