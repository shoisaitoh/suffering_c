/* https://webkaru.net/clang/array-sort-ascending-order/ */

#include <stdio.h>

int main(void){
  int i, j, tmp;

  int number[100];

  int total;
  printf("入力する数値の総数 = ");
  scanf("%d", &total);

  printf("%d個の数値を入力 \n", total);
  for (i=0; i<total; ++i)
    scanf("%d", &number[i]);

  for (i=0; i<total; ++i) {
    for (j=i+1; j<total; ++j){
      if (number[i] > number [j]) {
        tmp = number[i];
        number[i] = number[j];
        number[j] = tmp;
      }
    }
  }

  printf("昇順ソートした数値\n");
  for (i=0; i<total; ++i){
    printf("%d\n", number[i]);
  }
}