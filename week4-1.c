#include <stdio.h>

int main(void) {
  int year,month,day;
  scanf("%d.%d.%d", &year, &month, &day);
  printf("%d.%02d.%02d", year, month, day);
  return 0;
}
//codeup 1019
