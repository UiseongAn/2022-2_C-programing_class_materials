//안의성 / 22200422
//포인터를 이용하여 입력한 값을 출력하는 프로그램

#include <stdio.h>
int main(void) {
  int *count=NULL;//주솟값을 0으로 설정한 포인터 변수
  int N;//값을 입력받을 변수
  
  printf("Input number: ");//수를 입력하시오라고 출력
  scanf("%d", &N);//N에 수를 할당
  count = &N;//count에 N의 주솟값을 할당
  printf("%d", *count);//N의 주솟값을 할당받은 count에 저장된 값을 출력
  
  return 0;//0을 리턴
  
  //이전 코드의 문제점:count는 포인터 변수이기에 수를 할당하기 보다 주솟값을 할당해야한다. 
  
}