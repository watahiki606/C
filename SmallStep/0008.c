/*******************************************************************************
整数を入力し、奇数か偶数かを判定し結果を出力する。
********************************************************************************/
#include <stdio.h>

int main(void) {

  int seisu;
  int amari;
  printf("整数＝＝＞" );
  scanf("%d", &seisu );
  amari = seisu % 2;
  if(amari == 1 ){
    printf("%d は奇数です。\n", seisu );
  }else{
    printf("%d は偶数です。\n", seisu );    
  }
  return 0;
}
