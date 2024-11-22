#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  
  
  srand(time(0));
  int num;
  int n;

  int count;
  
  printf("Input Number for Alpha:");
  scanf("%d", &num);

  count = 'Z'-'a';

  for(int i=0; i<num; i++){
    if(rand()%2==0){
    n = rand()%count+'A';
      }else{
      n = rand()%count+'a';
      }

    printf("%c ", n);

    if(i%10 == 9){
      printf("\n");
    }
   
  }
  return 0;
}

