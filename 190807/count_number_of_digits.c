#include <stdio.h>

int main(void){

  long number;
  int digit = 0;

  printf("数値 = ");
  scanf("%ld", &number);

  while(number!=0){
    number = number / 10;
    ++digit;
  }

  printf("桁数 = %d\n", digit);

  return 0;
}