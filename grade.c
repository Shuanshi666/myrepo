#include <stdio.h>
int main(void) {
  int a;
  scanf("%d", &a);
  int r = a / 10;
  switch (r) {
  case 10:
  case 9:
    printf("A");
    break;
  case 8:
    printf("B");
    break;
  case 7:
    printf("C");
    break;
  default:
    printf("D");
  }
  return 0;
}