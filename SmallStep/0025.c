/*******************************************************************************
リダイレクションによりファイルを入力し、BMIを計算し、No.、身長、体重、BMIの一覧表を標準出力へ出力する。
---出力例---
SmallStepper$ ./a.out <bmi2.dat
No 身長 体重 BMI
-- ---- ---- -----
 1 1.72 65.8 22.24
 2 1.80 55.5 17.13
 3 1.51 46.2 20.26
 4 1.65 75.1 27.58
 5 1.69 60.7 21.25
********************************************************************************/
#include <stdio.h>

int main(void) {

  int i, j;
  double data[3];
  double bmi = 0;

  printf("No 身長 体重 BMI \n");
  printf("-- ---- ---- -----\n");

  for ( i = 0; i < 5; i++) {
    scanf("%lf%lf%lf", &data[0], &data[1], &data[2]);
    bmi = data[2] / (data[1] * data[1]);
    printf("%2.0f% 4.2f %4.1f% 5.2f",data[0], data[1], data[2], bmi);
    printf("\n");
  }
  return 0;
}
