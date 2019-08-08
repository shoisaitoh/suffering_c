/* https://webkaru.net/clang/file-read/ */

#include <stdio.h>

int main(void){

  char ch;

  FILE *fp;

  fp = fopen("file.txt", "r");

  if (fp == NULL ){
    perror("ファイルの読み込みに失敗!\n");
    return 1;
  }

  printf("▼===== テキストファイルの内容 =====▼\n");
  while((ch = fgetc(fp)) != EOF){
    printf("%c", ch);
  }

  fclose(fp);

  return 0;
}