#include<stdio.h>
/* https://webkaru.net/clang/swap-two-numbers/ */

int main(void){
  int a, b, tmp;

  printf("a = ");
  scanf("%d", &a);

  printf("b = ");
  scanf("%d", &b);

  tmp = b;
  b = a;
  a = tmp;

  printf("===== after =====\n");
  printf("a = %d\n", a);
  printf("b = %d\n", b);

  return 0;
}