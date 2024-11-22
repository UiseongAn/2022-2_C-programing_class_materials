#include <stdio.h>

//안의성 / 2022 / 9 / 23
//사용자에게 정수 2개와 연산자를 순차적으로 입력 받은 후 연산 결과를 출력하는 프로그램
//연산자 종류  +, -, *, /, %
int main() {

  char o;                        //계산 기호 변수
  int a,b;                       //계산할 수 변수
  int r ;                        //결과 변수

  printf("Input first integers: ");    //처음 입력받을 계산할 변수를 입력하라는 것을 출력
    scanf("%d",&a);                    //입력받은 수를 할당
  printf("Input second integers: ");   //두번쨰로 입력받을 계산할 변수를 입력 하라는 것을 출력
    scanf("%d",&b);                    //입력받은 수를 할당
  printf("Input operater:");           //계산기호를 입력하라는 것을 출력
    scanf("%c", &o);                   //버퍼찌꺼기를 제거해줄 구문
    scanf("%c", &o);                   //계산기호를 할당

  // if(o == '+'){                     //if문으로 했을 때
  //   r = a+b;
  // }else if(o == '-'){
  //   r = a-b;
  // }else if(o == '*'){
  //   r = a*b;
  // }else if(o == '/'){
  //   r = a/b;
  // }else if(o == '%'){
  //   r = a%b;
  // }

  switch(o){                       //스위치 문으로 했을 때
    case '+':                      //케이스 + 덧셈
            r = a+b;               //더한 수를 결과에 할당
            break;                 //스위치문 빠져나오기
    case '-':                      //케이스 - 뺄셈
            r = a-b;               //뺀 수를 결과에 할당
            break;                 //스위치문 빠져나오기
    case '*':                      //케이스 * 곱셈
            r = a*b;               //곱한 수를 결과에 할당
            break;                 //스위치문 빠져나오기
    case '/':                      //케이스 / 나눗셈
            r = a/b;               //나눈 수를 결과에 할당
            break;                 //스위치문 빠져나오기
    case '%':                      //케이스 % 나머지
            r = a%b;               //나머지를 결과에 할당
            break;                 //스위치문 빠져나오기
  }
  
  printf("result:%d\n",r);         //결과를 출력
  
  return 0;
}
