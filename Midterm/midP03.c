#include <stdio.h>

void input_data();
int print_A(int a, int b);
int a, b;

int main(void) {

  input_data();
  print_A(a, b);
  

  
  return 0;
}

void input_data(){

   printf("input number:");
   scanf("%d*%d", &a, &b);

}

int print_A(int a, int b){

  for(int i=0; i<a; i++){
    for(int j=0; j<b; j++){
      if(i==j){
        printf("%d", i+1);
      }else if(i<j){
        printf("\\");
      }else if(i>j){
        printf("/");
      }
    }
    printf("\n");
  }
  
}
