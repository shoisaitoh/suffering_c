#include <stdio.h>

int main(void){
  int r;
  double s;


  do{
    printf("半径?:");
    scanf("%d", &r);
  } while (r < 0);

  s = r * 3.14;
  printf("面積は%fです。\n",s);

  return 0;
}