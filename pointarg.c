#include <stdio.h>

void func(int *pvalue); /* プロトタイプ宣言 */

int main(void){
  int value = 10;
  printf("&value = %p\n",&value);
  func(&value); /* アドレスを渡す */
  printf("value = %d\n", value);
  return 0;
}

void func(int *pvalue){
  printf("pvalue = %p\n",pvalue);
  *pvalue = 100; /* 通常変数モードに切り替えて代入 */
  return;
}