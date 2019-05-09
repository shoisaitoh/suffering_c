#include <stdio.h>

int main (void) {
  int no;
  scanf("%d", &no);
  switch (no){
    case 1:
      printf("野比のび太\n");
      break;
    case 2:
      printf("源静香\n");
      break;
    case 3:
      printf("剛田武\n");
      break;
    case 4:
      printf("骨川スネ夫\n");
      break;
    case 5:
    case 6:
    case 7:
      printf("21エモン\n");
      break;
    default:
      printf("そんな番号の人はいない\n");
      break;
  }
  return 0;
}
