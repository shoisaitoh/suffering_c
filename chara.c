#include <stdio.h>
#include <ctype.h>


int main(void){
  /*
  char c = 'A' + 9;
  printf("%c\n",c);
  return 0;
  
  char c = '8';
  int suuti = c - '0';
  printf("%d\n", suuti);
  return 0;
  */
  char c = 'A';
  int suuti;
  if (isdigit(c)){
    suuti = c - '0';
  } else {
    suuti=0;
  }
  printf("%d\n",suuti);
  return 0;
}