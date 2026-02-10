#include "stdio.h"
#include "stdlib.h"
#include <time.h>
int main(void) {
  srand(time(NULL));
  int r = rand() % 100;
  int m = -1;
  while (m != r) {
    scanf("%d", &m);
    if (m > r) {
      printf("输入过大");
    } else if (m < r) {
      printf("输入过小");
    }
  }
  printf("恭喜你猜对了，正确答案是 %d\n", r);
  return 0;
}