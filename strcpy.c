#include <stdio.h>
#include <string.h>

int main(void){
  /*
  char str[10];
  strcpy(str,"MARIO");
  printf("%s\n",str);
  return 0;
  
  char str1[] = "MARIO",str2[10];
  strncpy(str2,str1,3);
  str2[3]='\0';
  printf("%s\n",str2);
  return 0;
  */
  char str1[12] = "DRAGON";
  char str2[] = "QUEST";
  strcat(str1, str2);
  printf("%s\n",str1);
  return 0;
  }