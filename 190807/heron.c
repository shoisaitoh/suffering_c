/* https://webkaru.net/clang/heron-triangle-formulas/ */

#include <stdio.h>
#include <math.h>

int main(void){
  float S, s;

  float a, b, c;

  printf("三角形の3辺の長さを入力：\n");
  printf("辺a = ");
  scanf("%f", &a);
  printf("辺b = ");
  scanf("%f", &b);
  printf("辺c = ");
  scanf("%f", &c);

  s = (a + b + c) / 2.0;
  S = sqrt(s*(s-a)*(s-b)*(s-c));

  printf("面積S = %.3f\n", S);

  return 0;
}