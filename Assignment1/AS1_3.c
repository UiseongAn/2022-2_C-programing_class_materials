#include <stdio.h>

// 안의성 / 2022 / 9 / 23
//2개의 실수를 입력받고 몫과 나머지를 구하는 프로그램
//C프로그래밍 과제 3

int main(void) {

  float num1, num2;                  //두 실수의 변수
  float result;                      //두 실수를 나누었을때 몫
  int remain;                        //두 실수를 나누었을때 나머지
  
  printf("Input float1 float2: ");   //변수를 입력하는 것을 출력
  scanf("%f %f", &num1, &num2 );     //변수를 할당

  result = num1 / num2;              //나눗셈의 계산식
  remain = (int)num1 % (int)num2;    //나머지의 계산식
  
  printf("입력 받은 실수는 %.3f, %.3f\n",num1,num2);  //입력받은 실수 출력
  printf("몫:%.3f\n나머지:%d\n",result,remain);    //몫과 나머지 출력
  return 0;
}
