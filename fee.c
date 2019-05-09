#include <stdio.h>

int main(void){
  int age;
  printf("年齢:");
  scanf("%d",&age);
  if(age <= 3) {
    printf("幼児:無料\n");
  } else if (age <= 12) {
    printf("子供:250円\n");
  } else {
    printf("大人:400円\n");
  }
  return 0;
}