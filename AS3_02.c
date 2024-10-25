#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 안의성 / 22200422
// 이 프로그램은 항상 행의 크기가 크도록 행열을 변환해서 출력하는 프로그램입니다. 


void transMatrix(int n[][5], int h);       //행과 열을 바꾸어 주는 함수


int main(void) {

  srand(time(0));                     //랜덤으로 변수를 만들어주는 식

  int size;                           // 행의 크기를 입력받을 변수
  
  printf("행의 크기 입력:");             //행의 크기를 입력 받으라는 것을 출력
  scanf("%d", &size);                 //행의 크기를 입력 받음
  
  int a[size][5];                      //입력받은 size를 토대로 열을 만듬
  
  for(int i=0; i<size; i++){        //for문으로 
    for(int j=0; j<5; j++){
      a[i][j] = rand()%11;                 //a열에 랜덤한 0~10를 지정
    }
  }

  printf("배열 생성 결과 출력.\n");        //배열을 랜덤으로 생성한 것을 출력한다는 것을 출력

  for(int i=0; i<size; i++){          //for문으로 배열 세로 
    for(int j=0; j<5; j++){     //for문으로 배열 가로
      printf("%2d  ", a[i][j]);          //a열을 출력한다.
    }
    printf("\n");                     //한줄을 띄운다.
  }
 printf("\n============================\n");   // 결과를 나타내기 위한 경계선 

  if(size<5){                                  //만약 행의 크기가 가로보다 작다면 
    transMatrix(a,size);                        //함수를 불러온다.
  }else{                                        //아니라면
    printf("배열을 변환할 필요가 없습니다.\n");        //배열 변환 불필요를 출력.
  }

  return 0;                                     
}

void transMatrix(int n[][5], int h){            //행열을 바꾸는 함수

  for(int i=0; i<5; i++){                       //세로를 출력하는 for문
    for(int j=0; j<h; j++){                     //가로를 출력하는 for문
      printf("%2d   ", n[j][i]);                //n열을 출력한다.
    }
    printf("\n");                               //한줄을 띄운다.
  }
}