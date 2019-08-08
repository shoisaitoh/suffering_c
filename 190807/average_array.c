/* https://webkaru.net/clang/average-array/ */

#include <stdio.h>

int main(void){
  int i, n;

  float num[100];
  float sum, ave;

  printf("数値の数を入力（1~100） = ");
  scanf("%d", &n);

  sum = 0.0;
  for (i=0;i<n;i++){
    printf("%d個目 = ", i+1);
    scanf("%f", &num[i]);
    sum += num[i];
  }

  ave = sum/n;
  printf("数値の平均値 = %.2f\n", ave);

  return 0;
}