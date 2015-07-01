/*
配列の要素を降順に並べ替えて出力する。ソートと出力にポインタを使用する。
*/
#include <stdio.h>

int main(void) {
  int i, j, tmp = 0, n = 5;
  double d[] = {160.7,162.8,155.5,168.3,160.1};
  double *p;

  p = d;
  printf("---ソート前---\n");
  for(i = 0; i < n; i++){
    printf("%6.1f", *(d+i));
  }
  printf("\n");
  for( i= 0; i < n-1;i++){
    for(j = i+1; j < n; j++){
      if(*(d+i) < *(d+j)){
        tmp = *(d+i);
        *(d+i) = *(d+j);
        *(d+j) = tmp;
      }
    }
  }
  printf("---ソート後---\n");
  for(i = 0; i < n; i++){
    printf("%6.1f", *(d+i));
  }
  printf("\n");
  return 0;
}
