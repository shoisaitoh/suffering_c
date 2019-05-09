#include <stdio.h>
#include <memory.h>

int main(void){
  int array1[] = {42,79,13,75,19};
  int array2[] = {1,2,3,4,5};
  int i;

  for (i=0; i<sizeof(array2)/sizeof(array2[0]);i++){
    printf("array2[%d] = %d\n",i,array2[i]);
  }

  /* array1の全要素をarray2にコピー */
  /* memcpy(cp先配列, cp元配列, 配列全体のサイズ) */
  memcpy(array2,array1,sizeof(array1));

  for (i=0; i<sizeof(array2)/sizeof(array2[0]);i++){
    printf("array2[%d] = %d\n",i,array2[i]);
  }
}