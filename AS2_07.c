#include <stdio.h>

// 안의성 / 22200422
// 입력한 숫자가 소수인지 판단하는 프로그램 

int main(void) {

  int num;                              //입력받을 변수
  int a=0;                              //플래그 변수
  
  printf("Input number:");              //수를 입력하라는 것을 출력
  scanf("%d", &num);                    //입력받은 수를 num에 할당

  for(int i = 2; i<num; i++){           //for문을 통하여 2부터 num-1수까지 i를 1씩 증가시킨다. 
    if(num%i == 0){                     //만약 num을 i로 나누었을때 나머지가 0이라면  
      a=1;                              // a에 1을 할당한다.
    }
  }


  if(a==0){                                      //만약 a가 그대로 0이라면 
    printf("%d is a prime number\n", num);       //num은 소수이다를 출력한다.
  }else if(a==1){                                //만약 a가 1이라면
    printf("%d is a not prime number\n", num);   //num은 소수가 아니다를 출력한다.
  }
  
  return 0;
}