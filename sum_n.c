#include "stdio.h"
int main(void) {
  int n;
  int sum = 0;
  scanf("%d", &n);
  while (n != 0) {
    sum += n;
    n--;
  }
  printf("%d", sum);
  return 0;
}