#include <stdio.h>

// 안의성 / 22200422
// 숫자를 입력받아 입력받은 숫자만큼 *을 출력한다.


int main(void) {
  int num;                          //수를 입력받는 변수
  int i=1;                          //while문을 카운트해줄 변수
  
  printf("Input number:");          //숫자를 입력하라는 것을 출력
  scanf("%d", &num);                //입력받은 숫자를 num에 할당

  while(1){                         //무한루프구문 
    printf("*");                    //*을 출력한다.
    if(i==num){                     //i가 num이랑 같아지면
      break;                        //while문을 벗어난다.
    }
    i++;                            //i가 1씩 증가한다.
  }
  printf("\n");                     //한줄 띄워준다.
  return 0;
}