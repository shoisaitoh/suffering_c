#include <stdio.h>

int main(void){
  int i;
  for (i = 1; i <= 10; i++){
    printf("%02d回目\n", i);
    if (i == 5)
      break;
  }
  return 0;
}