#include <stdio.h>

int count;

int countfunc(void);

int main(void){
  countfunc();
  count = 10;
  countfunc();
  countfunc();
  return 0;
}
int countfunc(void){
  count++;
  printf("%d\n", count);
  return count;
}