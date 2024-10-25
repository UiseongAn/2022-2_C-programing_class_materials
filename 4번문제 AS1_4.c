#include <stdio.h>

//안의성 / 2022 / 9 / 23
//학번을 입력받고 입력 받은 학번을 이용하여 입학년도, 학과, 입학순서를 출력하는 프로그램
//C프로그래밍 과제 4

int main(void){

  int num;                           //학번의 변수
  int a, b, c, d, e, f, g, h;        //각 자릿수를 위한 변수들
  
  printf("Input student number: ");  //학번을 입력하라는 것을 출력
  scanf("%d",&num);                  //학번을 할당

  a = num/10000000;          //학번의 첫번째 자릿수를 구하기 위해 int로 나눠줌 
  num %= 10000000;           //나눠준 것의 나머지를 다시 num에 할당
  
  b = num/1000000;            //위와 같음
  num %= 1000000;
  
  c = num/100000;
  num %=100000;
  
  d = num/10000;
  num %=10000;
  
  e = num/1000;
  num %=1000;
  
  f = num/100;
  num %=100;
  
  g = num/10;
  
  h = num%10;

    if(a ==1 ){                    //첫자리가 1이면 19년도
    printf("1999년 이전 입학\n입학년도:19%d%d\n",b,c); //뒤에 b,c붙여서 년도 완성
    }else if(a ==2){              //첫자리가 2면 20년도
    printf("2000년 이후 입학\n입학년도:20%d%d\n",b,c); // 위와 같음
    }

    if( d ==5 && e==5){              //각 d자릿수와 e자릿수를 비교하여 전공을 출력
      printf("전공:새내기\n");
    }else if( d ==6 && e==6){
      printf("전공:인간문화\n");
    }else if( d ==7 && e==7){
      printf("전공:로봇제어\n");
    }else if( d ==8 && e==8){
      printf("전공:전산공학\n");
    }else if( d ==9 && e==9){
      printf("전공:인간생명\n");
    }else{
      printf("전공번호오류\n");          //다른 수를 입력 받았을 때
    }

  printf("입학순번:%d%d%d\n",f,g,h);    //입학한 순서를 나타내는 번호 출력
  return 0;
}