//안의성 / 22200422
//원하는 수를 입력하면 그만큼 랜덤하 문자를 출력해주는 프로그램

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
void print_array(int n);//결과를 출력해줄 함수

int main(void) {
  int num;//출력할 수를 위한 변수
  printf("Input number of characters:");//원하는 수를 입력하라고 출력
  scanf("%d", &num);//입력받은 수를 num에 할당
  print_array(num);//함수를 불러온다.
  return 0;
}

void print_array(int n){
  int count=0;//줄띄우기를 위한 변수
  int* S;//포인터 함수
  S = (int*)malloc(sizeof(int)*n);//원하는 만큼 공간을 확보한다.
  srand(time(0));//랜덤한 수를 지정해줄 식
  for(int i=0; i<n; i++){//n만큼 반복할 for문
    S[i] = rand()%126;//S에 아스키코드의 개수사이의 수를 랜덤으로 할당
    if(S[i] <= ' '){//만약 할당된 값이 ' '보다 작으면
      i--;//i를 하나 빼준다.
    }
  }
  for(int i=0; i<n; i++){//n만큼 반복한 for문
    count++;//count를 1씩 더해준다.
    printf("%c ", S[i]);//할당된 문자를 프린트한다.
    if(count%10==0){//만약 count를 10으로 나누었을때 나머지가 0이면
      printf("\n");//한줄을 띄워준다.
    }
  }
  free(S);//사용했던 메모리를 반환해준다.
}

 