#include <stdio.h>

int sum(void); /* プロトタイプ宣言 */
/* あらかじめ先頭で関数の型を宣言しておくことで、他の全ての関数からその関数を使えるようにすること。 */
/* #includeの正体 */
/* stdio.hファイルの中にprintf関数などがあったので、#include(stdio.h)というプロトタイプ宣言をする必要があった */

int main(void){
  sum();
  return 0;
}

int sum(void){
  printf("%d\n", (1 + 100) * 100 / 2);
  return 0;
}