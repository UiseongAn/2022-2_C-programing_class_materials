#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// 안의성 / 22200422 

// 이 프로그램은 랜덤으로 행열 2개를 생성하여 그것을 연산한 값을 나타내는 프로그램입니다. 

void Print_matrix(int A[4][5], int B[4][5]);         //배열 두개를 화면에 출력하는 함수 
void Matrixoper(int A[4][5], int B[4][5], char Op);    //주어진 연산자도 배열두개를 계산 하여 프린트하는 함수

int main(void) {
  srand(time(0));               //시간을 기준으로 랜덤된 수가 변하게 하는 함수
  
  char op;                      //연산자를 받을 변수
  int a[4][5]={0}, b[4][5]={0}; // 두개의 배열을 받을 열

  printf("input operator:");    //연산하고 싶은 연산자를 입력하라는 것을 표시 
  scanf("%c", &op);             //연산자를 입력받는다

  
  for(int i=0; i<4; i++){       //for문을 이용하여 
    for(int j=0; j<5; j++){
      a[i][j] = rand()%10+1;    //a열에 랜덤으로 수를 지정해준다.
      b[i][j] = rand()%10+21;   //b열에 랜덤으로 수를 지정해준다.
    }
  }  
  
  Print_matrix(a,b);            //a열과 b열을 파라매터로 입력받아 함수에 지정된 식을 수행
  Matrixoper(a,b,op);           //a열과 b열과 연산자를 파라매터로 입력받아 함수에 지정된 식을 수행
  
  return 0;
}


void Print_matrix(int A[4][5], int B[4][5]){    //a,b열을 수행하는 함수

  for(int i=0; i<4; i++){       //for문으로 세로 줄 수를 지정해준다.
    for(int j=0; j<5; j++){  //for문으로 5단위씩 
      printf("%-2d    ", A[i][j]);    //띄어쓰기를 하며 a를 출력
    }
    printf("          ");             //중간의 공백
    for(int j=0; j<5; j++){    //for문으로 5단위씩
      printf("%-2d    ", B[i][j]);      //띄워쓰기를 하며 b를 출력
    }
    printf("\n");                    //한 줄을 띄워준다.
  }
  printf("\n");                      //모든 for문이 끝나면 결과를 위해 한 줄을 더 띄워 준다.
}



void Matrixoper(int A[4][5], int B[4][5], char Op){    //a,b열을 연산자로 연산하는 함수

  int C[4][5]={0};        //연산된 새로운 수를 넣을 열

  if(Op == '+'){                  //만약 연산자가 +라면
    for(int i=0; i<4; i++){      //for문으로
      for(int j=0; j<5; j++){
        C[i][j] = A[i][j]+B[i][j];           //a+b한 값을 c에 지정해준다.
      }  
    }
      
  }else if(Op == '-'){                //만약 연산자가 -라면
    for(int i=0; i<4; i++){           //for문으로
       for(int j=0; j<5; j++){
        C[i][j] = A[i][j]-B[i][j];    //a+b한 값을 c에 지정해준다.
      } 
    }
  }

  printf("============RESULT============\n"); //결과를 알려줄 경계선을 출력해준다. 

  for(int i=0; i<4; i++){             //세로로 4줄을 출력할 for문
    for(int j=0; j<5; j++){     // 가로로 5줄을 출력할 for문
      printf("%-2d    ", C[i][j]);       //띄어쓰기를 하며 c를 출력
    }
    printf("\n");                     //한 줄을 띄워준다.
  }
}
