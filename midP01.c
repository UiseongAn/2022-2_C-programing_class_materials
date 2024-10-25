#include <stdio.h>

int main(void) {

  int num;
  
  printf("Input student number(ex. 2200011):");
  scanf("%d", &num);

  if(num<2000000 || num>9999999){
    printf("Input error: restart program");
  }else{
    num=num/100000;
    printf("입학년도: %d년도 입학\n", num);
  }
  
  return 0;
}