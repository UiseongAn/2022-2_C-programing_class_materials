//안의성 / 22200422
//자동차 두대의 정보를 구초체를이용하여 받고 출력하는 프로그램

#include <stdio.h>

struct st_car{//자동차의 정보를 저장 할 구조체

  char model[20];
  int length;
  int width;
  int depth;
  float velocity;
};

int main(void) {
  struct st_car car[2];//구조체를 부를 배열을 정해준다. 
  char dummy;//쓰레기값을 받을 변수
  printf("Input car data for type01(medel length width depth velocity):");//필요한 값을 입력하라고 출력
  scanf("%s %d %d %d %f%c", car[0].model , &car[0].length, &car[0].width, &car[0].depth, &car[0].velocity, &dummy);//입력받은 값을 구조체에 할당
  
  printf("Input car data for type02(medel length width depth velocity):");//필요한 값을 입력하라고 출력
  scanf("%s %d %d %d %f", car[1].model , &car[1].length, &car[1].width, &car[1].depth, &car[1].velocity);//입력받은 값을 구조체에 할당

  printf("model %s data is: %d %d %d %.1f\n",car[0].model , car[0].length, car[0].width, car[0].depth, car[0].velocity);//받은 구조체의 값을 출력
  printf("model %s data is: %d %d %d %.1f\n",car[1].model , car[1].length, car[1].width, car[1].depth, car[1].velocity);//받은 구조체의 값을 출력
  
  return 0;
}