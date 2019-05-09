#include <stdio.h>

int main(void){
  char str[16];
  char str1[12] = "DRAGON";
  char str2[] = "QUEST";
  int i = 3;
  sprintf(str, "%s%s%d\n", str1, str2, i);
  printf(str);
  return 0;
}