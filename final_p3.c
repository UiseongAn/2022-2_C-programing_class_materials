#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void genNumbers(int n[5][5]);
int sumOfRow(int n[5][5], int a);
void printSums(int n[5], int p[5]);

int main(void) {
  int N[5][5];
  int R[5];
  int plag[5];
  int a;
  genNumbers(N);

  printf("===Numbers====\n");
  
  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      if(N[i][j]<10){
        printf("0");
      }
     printf("%d ", N[i][j]);
    }
    printf("\n");
  }
  printf("==============\n\n");

  while(1){
    printf("Input Row(1~5, end:0):");
    scanf("%d", &a);

    if(1<=a && a<=5){
       R[a-1] = sumOfRow(N, a);
      printf("%d %d %d %d %d =%d\n", N[a-1][0], N[a-1][1], N[a-1][2], N[a-1][3], N[a-1][4], R[a-1]);
      plag[a-1]=1;
    }else if(a==0){
      break;
    }else{
      printf("Input erreor\n\n");
    }
  }
  printf("\n");
  printSums(R, plag);
  
  
  return 0;
}

void genNumbers(int n[5][5]){
  
  srand(time(0));
  
  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      n[i][j]=rand()%100;
    }
  }
  
}

int sumOfRow(int n[5][5], int a){
  return n[a-1][0] + n[a-1][1] + n[a-1][2] + n[a-1][3] + n[a-1][4];
}

void printSums(int n[5], int p[5]){

 for(int i=0; i<5; i++){
   if(p[i]==1){
     printf("[%d]row-sum:%d avg:%.2f\n", i+1, n[i], 1.0*n[i]/5);
   }
 }
}