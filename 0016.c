/*******************************************************************************
整数を入力し、1から入力した整数までの合計を計算し、合計を出力する。ただし計算にはwhile文を使う。
********************************************************************************/
#include <stdio.h>

int main(void) {
  int seisu, goukei = 0;
  int i = 1;

  printf("整数＝＝＞" );
  scanf("%d", &seisu);
  while(i <= seisu){
    goukei += i;
    i++;
  }
  printf("1〜%dまでの合計は%dです。\n", seisu, goukei);
  return 0;
}
