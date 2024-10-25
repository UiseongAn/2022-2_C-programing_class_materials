#include <stdio.h>

//안의성 / 22200422
//수를 입력받아 그 개수만큼 홀수면 * 짝수면 +를 출력하는 프로그램

int main(void) {
  int num;                                //수를 할당받을 변수
  printf("input number:");                //수를 입력하라는 것을 출력
  scanf("%d", &num);                      //입력받은 수를 num에 할당

  if(num%2==1){                           //만약 num을 2로 나누었을때 나머지가 1이라면 즉 홀수라면 
    for(int i=0; i<num; i++){             //for문을 이용해 num의 개수만큼
      printf("*");                        //*을 출력
    }
  }else if(num%2==0){                     //만약 num을 2로 나누었을때 나머지가 0이라면 즉 짝수라면 
    for(int i=0; i<num; i++){             //for문을 이용해 num의 개수만큼
      printf("+");                        //+를 출력
    }
  }
  printf("\n");                           //한줄 띄워준다.
  return 0;
}