/*******************************************************************************
点数を整数で入力し、評価を出力する。
---条件---
80〜100点 A
70〜79点  B
60〜69点  C
0〜59点   D
0から100以外が入力されたらメッセージを出力する(整数以外は入力されないものとする)。
ifのネストを使う。
********************************************************************************/
#include <stdio.h>

int main(void) {
  int tensu;
  printf("点数＝＝＞");
  scanf("%d", &tensu);

  if(tensu >= 70){
    if(tensu >= 80){
      if(tensu > 100 ){
        printf("0から100を入力してください。\n");
      }else{
        printf("%d点はAです。\n", tensu);
      }
    }else{
        printf("%d点はBです。\n", tensu);
    }
  }else{
    if(tensu >= 60){
      printf("%d点はCです。\n", tensu);
    }else{
      if(tensu < 0){
        printf("0から100を入力してください。\n");
      }else{
        printf("%d点はDです。\n", tensu);
      }
    }
  }
  return 0;
}
