//안의성 / 22200422
//입력된 세수의 중간을 찾아서 출력하는 프로그램

#include <stdio.h>
int* findmedian(int *a,int *b, int *c);//중간 수를 찾아내줄 함수
int main(void) {
  int num[3];//입력한 수를 입력받을 변수
  printf("Input numbers(1 2 3):");//수를 입력하라고 출력
  scanf("%d %d %d", &num[0], &num[1], &num[2]);//입력한 수를 할당
  printf("Median number is %d", *findmedian(&num[0], &num[1], &num[2]));//중간수를 출력한다.
  return 0;
}

int* findmedian(int *a,int *b, int *c){//중간수를 가려낼 함수
  if(*c<=*a && *a<=*b || *b<=*a && *a<=*c){//a가 중간수이면
    return a;//a를 리턴한다.
  }
  if(*a<=*b && *b<=*c || *c<=*b && *b<=*a){//b가 중간수이면
    return b;//b를 리턴한다.
  }
  if(*b<=*c&&*c<=*a || *a<=*c&&*c<=*b){//c가 중간수이면
    return c;//c를 리턴한다.
  }
  return 0;
}