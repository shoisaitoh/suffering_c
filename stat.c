#include <stdio.h>

int countfunc(void);

int main(void){
  countfunc();
  countfunc();
  countfunc();
  return 0;
}
int countfunc(void){
  static int count; /* 静的なローカル変数 */
  count++;
  printf("%d\n",count);
  return count;
}
