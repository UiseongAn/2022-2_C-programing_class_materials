#include <stdio.h>

// 안의성 / 22200422
//로켓 모터의 추진력 평균을 계산하는 프로그램


float funcForce(float w, float v, float t);      //force를 구하는 함수
float funcThrust(float f, float w);              //thrust를 구하는 함수

int main(void) {

  float weight, velocity, time;     //weight, velocity, time를 받을 변수
  float force, thrust;              //force, thrust를 받을 변수

  printf("INPUT DATA(ex. weight velocity time):"); //필요한 정보를 입력하라고 출력 한다.
  scanf("%f %f %f", &weight, &velocity, &time);    //필요한 정보를 입력받는다
  printf("OUTPUT DATA:\n%.2f\n%.2f\n%.2f\n\n", weight, velocity , time);          //입력받은 정보를 출력한다.

  force = funcForce(weight, velocity ,time);   //force를 계산하는 함수를 이용해 값을 리턴받는다.
  thrust = funcThrust(force, weight);          //thrust를 계산하는 함수를 이용해 값을 리턴 받는다.
  
  printf("Force due to acceleration: %.2f\n", force);  //force를 출력한다.
  printf("Total thrust due to acceleration: %.2f\n", thrust); //thrust를 출력한다. 
  return 0;
}


float funcForce(float w, float v, float t){      //force를 구하는 함수
  float f;                    //force 변수 
  float g = 32.2;             //중력을 나타냄

  f = w*v/(t*g);              //force를 구하는 식

  return f;                   //f를 리턴한다.
}


float funcThrust(float f, float w){   //thrust를 구하는 함수
float th;                    //thrust 변수

  th = w+f;                  //thrust를 구하는 식

  return th;                 //th를 리턴해준다.
}