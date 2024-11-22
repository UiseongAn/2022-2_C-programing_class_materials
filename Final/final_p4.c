#include <stdio.h>

struct sum{
  char name[20];
  double input;
  int a;
  float b;
};

void divPart(struct sum A[2]);
void printSTreal(struct sum A[2]);

int main(void) {

  struct sum N[2];

  printf("Input Name and doubleNumber[0](ex. Han 12.123):");
  scanf("%s %lf", N[0].name, &N[0].input);
  printf("Input Name and doubleNumber[1](ex. Han 12.123):");
  scanf("%s %lf", N[1].name, &N[1].input);
  divPart(N);

  printf("\n");
  printf(" |Name|  |original|   |integer|      |float|\n");
  printSTreal(N);

  return 0;
}

void divPart(struct sum A[2]){
  
    A[0].a = (int)A[0].input ;
    A[0].b = A[0].input - A[0].a;
  
    A[1].a = A[1].input ;
    A[1].b = A[1].input - A[1].a;
}

void printSTreal(struct sum A[2]){

  printf("%s:      %5.3lf        %d            %.3f\n", A[0].name, A[0].input, A[0].a, A[0].b);
  printf("%s:      %5.3lf        %d            %.3f\n", A[1].name, A[1].input, A[1].a, A[1].b);

  printf("SUM:      %.3lf        %d            %.3f\n", A[0].input + A[1].input, A[0].a+A[1].a, A[0].b+A[1].b);
}