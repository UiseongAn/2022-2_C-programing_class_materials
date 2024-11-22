#include <stdio.h>

//안의성 / 22200422
//수를 입력하면 그 크기만큼 X자를 출력하는 프로그램

int main(void) {
  int num;                      //크기를 입력받을 변수
  printf("input number:");      //숫자를 입력하라는 것을 출력
  scanf("%d", &num);            //입력받은 수를 num에 할당

  if(num%2==0){                 //만약 num을 2로 나누었을때 즉 짝수라면 
    num++;                      //num에 1을 더해준다

    for(int i=0; i<(num-1)/2; i++){       //X의 윗부분을 출력할 for문
      
      for(int j=0; j<i; j++){             //처음의 공백을 출력할 for문
        printf(" ");                      //j만큼 공백을 출력한다.
      }
      printf("+");                        //+을 하나 출력한다.
      for(int j=0; j<num-2*(i+1); j++){   //+과+사이 공백을 출력할 for문
        printf(" ");                      //공백을 출력한다.
      }
      printf("+\n");                      //끝 +을 출력하고 한줄을 띄어준다.
    }
    
    for(int j=0; j<(num-1)/2; j++){       //중간 + 앞의 공백을 출력할 for문
        printf(" ");                      //공백을 출력한다.
      }
      printf("+\n");                      //+를 출력하고 한줄 띄워준다.
    
    for(int i=0; i<(num-1)/2; i++){       //X의 아래부분을 출력할 for문
      
      for(int j=0; j<(num-1)/2-(i+1); j++){   //처음의 공백을 출력할 for문
        printf(" ");                          //공백을 출력한다.
      }
      printf("+");                            //첫번째 +을 하나 출력한다.
      for(int j=0; j<2*i+1; j++){             //+과+ 사이 공백을 출력할 for문
        printf(" ");                          //공백을 출력한다.
      }
      printf("+\n");                          //마지막+을 출력하고 한줄을 띄워준다.
    }
  }else{

    for(int i=0; i<(num-1)/2; i++){       //X의 윗부분을 출력할 for문
      
      for(int j=0; j<i; j++){             //처음의 공백을 출력할 for문
        printf(" ");                      //j만큼 공백을 출력한다.
      }
      printf("*");                        //*을 하나 출력한다.
      for(int j=0; j<num-2*(i+1); j++){   //*과*사이 공백을 출력할 for문
        printf(" ");                      //공백을 출력한다.
      }
      printf("*\n");                      //끝 *을 출력하고 한줄을 띄어준다.
    }
    
    for(int j=0; j<(num-1)/2; j++){       //중간 * 앞의 공백을 출력할 for문
        printf(" ");                      //공백을 출력한다.
      }
      printf("*\n");                      //*를 출력하고 한줄 띄워준다.
    
    for(int i=0; i<(num-1)/2; i++){       //X의 아래부분을 출력할 for문
      
      for(int j=0; j<(num-1)/2-(i+1); j++){   //처음의 공백을 출력할 for문
        printf(" ");                          //공백을 출력한다.
      }
      printf("*");                            //첫번째 *을 하나 출력한다.
      for(int j=0; j<2*i+1; j++){             //*과* 사이 공백을 출력할 for문
        printf(" ");                          //공백을 출력한다.
      }
      printf("*\n");                          //마지막*을 출력하고 한줄을 띄워준다.
    }
    
  }
  return 0;
}