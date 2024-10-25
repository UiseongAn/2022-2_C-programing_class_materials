#include <stdio.h>

// 안의성 / 22200422
// 세로와 가로의 크기를 입력받고 (5*2 => 세로길이 5, 가로길이 2) 결과를 출력하는 프로그램 작성 but 3의 배수는 *로 출력함.

int main(void) {

  int a,b;                          //세로와 가로의 변수
  int count=1;                      //전체의 수를 세줄 카운트
  
  printf("Input m*n:");             //세로와 가로를 입력하라고 출력
  scanf("%d*%d", &a, &b);           //입력받은 세로와 가로를 a,b에 할당
  printf("\n=========output=========\n"); //output창을 나타내줌

  for(int i=0; i<a; i++){              //세로를 담당하는 for문
    for(int j=0; j<b; j++){            //가로를 담당하는 for문
      if(count%3==0){                  //만약 count에 3을 나누었을때 나머지가 0이라면 
        printf(" *");                  //*을 출력해준다.
      }else{                           //그렇지 않다면
        printf("%2d", count);          //count를 열에 맞춰서 출력해준다.
      }
      count++;                         //count를 하나씩 증가시킨다.
    }
    printf("\n");                      //가로입력이 끝나면 줄을 한줄 띄운다.
  }
  return 0;
}