#include <stdio.h>

//안의성 / 22200422
//XY+YX=99를 만족하는 모든 경우의 수와 총 반복 횟수를 출력하는 프로그램

int main(void) {
  int a, b;                            //XY와 YX를 할당해줄 변수
  int count =0;                        //전체 실행횟수를 세아려줄 변수
  int realcount=0;                     //원하는 수를 찾기까지의 실행횟수를 세아려줄 변수
  for(int i=0; i<=9; i++){             //X를 0에서 9까지 반복해줄 for문
    for(int j=0; j<=9; j++){           //Y를 0에서 9까지 반복해줄 for문
      a= i*10+j;                       //a는 10*X + Y 해서 XY를 만들어 준다.
      b= j*10+i;                       //b는 10*Y + X 해서 YX를 만들어 준다.
      if(a+b==99){                     //a+b가 99일 때
        printf("%02d+%02d=99\n",a,b);  //이때 a,b가 무엇인지 식을 출력한다.
        realcount=count;               //원하는 식을 찾을때까지의 실행횟수를 출력하기 위해 식을 출력할 때만 realcount에 횟수를 저장해준다.
      }
      count++;                         //총 실행 횟수를 세어주는 식
    }
  }
  printf("count:%d\n",realcount);      //원하는 식을 모두 찾을때까지의 실행횟수를 출력한다.
                                       //한줄 띄운다.
  return 0;
}