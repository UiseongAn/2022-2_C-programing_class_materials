#include <stdio.h>


// 안의성 / 2022 / 9 / 23
// 5개의 숫자를 입력받고 합과 평균을 구하는 프로그램
// C프로그래밍 과제

int main(void) {

  int num = 0;                   //입력받을 숫자를 뜻하는 변수
  int total = 0;                 //전부 합한 것을 뜻하는 변수
  float average = 0;             //평균을 뜻하는 변수
  
for (int i = 1; i<=5; i++){      //5개의 수를 입력받게 해줄 수 있는 for문
  printf("0%d번째 입력:",i);       //입력하라고 출력되는 문장
  scanf("%d", &num);             //입력된 숫자를 할당하는 num

  total +=num;                 //원래 있던 total에 num에 할당된 수를 더한다.
  
}
  average = 1.0*total/5;       //total에 5를 나눠준다. 
  
  printf("입력이 완료되었습니다.\n입력받은 숫자의 합: %-5d, 평균: %.2f입니다.\n",total,average);         //값을 출력한다.
  
  return 0;
}
