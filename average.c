#include "stdio.h"
int main(void) {
  int a, b;
  scanf("%d%d", &a, &b);
  int c = (a + b) / 2;
  printf("%d", c);
  return 0;
}