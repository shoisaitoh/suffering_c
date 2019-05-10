#include <stdio.h>

int main(void){
  int i;
  FILE *file;
  file = fopen("test.txt", "r");
  fscanf(file,"%d",&i);
  /*fprintf(file, "Hello, World!%d", i);*/
  fclose(file);
  printf("%d\n",i);
  return 0;
}