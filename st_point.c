#include <stdio.h>
#include <string.h>

typedef struct {
  int year;
  int clas;
  int number;
  char name[64];
  double stature;
  double weight;
} student;

int main(void){
  student data;
  student *pdata;

  pdata = &data; /* 初期化 */
  (*pdata).year = 10; /* 通常変数モードへの切り替え */
  strcpy((*pdata).name,"MARIO"); /* 通常変数モードへの切り替え */

  return 0;
}