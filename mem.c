#include <stdio.h>

int main(void){
  /*
  int i1,i2,i3;
  printf("i1(%p)\n",&i1);
  printf("i2(%p)\n",&i2);
  printf("i3(%p)\n",&i3);
  return 0;
  */
  char str[256] = "DRAGON";
  scanf("%s",&str[3]);
  printf("%s\n", str);
  return 0;
}