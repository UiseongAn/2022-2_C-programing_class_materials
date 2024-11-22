//안의성 / 22200422
//숫자 3개를 입력하고 함수를 이용하여 가장 큰수와 작은 수를 알려주는 프로그램

#include <stdio.h>

int max(int N[]); //가장 큰수를 알려주는 함수
int min(int N[]); //가장 작은수를 알려주는 함수

int main(void) {
  int n[3] = {0};                   //입력한 수를 저장할 배열
  for (int i = 0; i < 3; i++) {     // 3번 반복할 for문
    printf("Input number(%d):", i); //숫자를 넣으세요
    scanf("%d", &n[i]);             //숫자를 n배열에 할당한다.
  }
  printf("max:%d min:%d\n", max(n), min(n)); //가장 큰수와 작은 수를 출력한다.

  return 0;
}

int max(int N[]) {              //가장 큰수를 알려주는 함수
  int M = N[0];                 //임의로 가장큰 수를 저장할 변수
  for (int i = 0; i < 3; i++) { // 3번 반복할 for문
    if (M < N[i]) {             //만약 N이 M보다 크다면
      M = N[i];                 // M에 N을 할당
    }
  }
  return M; // M을 리턴
}

int min(int N[]) {              //가장 작은수를 알려주는 함수
  int M = N[0];                 //임의로 가장작은 수를 저장할 변수
  for (int i = 0; i < 3; i++) { // 3번 반복할 for문
    if (M > N[i]) {             //만약 N이 M보다 작다면
      M = N[i];                 // M에 N을 할당
    }
  }
  return M; // M을 리턴
}