#include <stdio.h>

// 안의성 / 22200422
// 수를 입력받고 입력받은 수만큼 *을 출력한다.

int main(void) {  
  int num;                        //수를 할당받을 변수
  printf("Input number:");        //수를 입력하라고 출력
  scanf("%d",&num);               //입력받은 수를 num에 할당

  for(int i=0; i<num; i++){       //for문을 통해 0부터 num-1의 횟수만큼 for문을 실행
    printf("*");                  //*을 출력한다
  }
  printf("\n");                   //한줄을 띄워준다
  return 0;
}