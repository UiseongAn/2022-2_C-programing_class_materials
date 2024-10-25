#include <stdio.h>

int main(void) {

  int num1, num2, num3;
  
  printf("Input numbers(ex. 1 2 3)");
  scanf("%d %d %d", &num1, &num2, &num3);

  if(num1<=num2 && num2 <=num3){
    printf("Sorted:%d %d %d",num1,num2,num3);
  }else if(num1<=num3 && num3<= num2){
    printf("Sorted:%d %d %d",num1,num3,num2);
  }else if(num2<=num1 && num1 <=num3){
    printf("Sorted:%d %d %d",num2,num1,num3);
  }else if(num2<=num3 && num3 <=num1){
    printf("Sorted:%d %d %d",num2,num3,num1);
  }else if(num3<=num1 && num1 <= num2){
    printf("Sorted:%d %d %d",num3,num1,num2);
  }else if(num3<=num2 && num2 <= num1){
    printf("Sorted:%d %d %d",num3,num2,num1);
  } 
  
  return 0;
}