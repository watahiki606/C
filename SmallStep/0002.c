/*******************************************************************************
int型の変数を4個用意し、計算をして計算結果を出力例のように出力する。
計算：1つ目の整数 - 2つ目の整数 ÷ 3つ目の整数

---出力例---
10 - 6 / 3 = 8
********************************************************************************/
#include <stdio.h>

int main(void) {
  int seisu1 = 10;
  int seisu2 = 6;
  int seisu3 = 3;
  int kotae;

  kotae = seisu1 - ( seisu2 / seisu3 );
  printf("%d - %d / %d = %d\n",seisu1, seisu2, seisu3, kotae );
  return 0;
}