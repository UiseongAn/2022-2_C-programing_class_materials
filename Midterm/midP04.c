#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float create_randNum(int a,int b,int c);
void print_avg(float avr);
int a,b,c;


    
int main(void) {

  
  printf("input numbers(count, min, max):");
  scanf("%d,%d,%d", &a, &b, &c);
  print_avg(create_randNum(a, b, c));
  
  return 0;
}

float create_randNum(int a,int b,int c){
  
  srand(time(0));  // 랜덤으로 수를 만들어내는 문
  
  float sum=0;
  int n;
  
  for(int i=0; i< a; i++){
    n=rand()%c+b;
    printf("%d ", n);
    sum+=n;
  }
  printf("\n");

  return sum;
}


void print_avg(float avr){

  float result;

  result= avr/a;

  printf("average:%.2f\n", result);
  
}