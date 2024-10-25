#include <stdio.h>

// 안의성 / 22200422
// n번째에 있는 피보나치수열을 구하는 법

int Fibo(int n);                    //피보나치 수열을 불러오는 함수

int main(void) {

  int number;                           //숫자를 입력받을 변수          
 
  printf("fibonaci number: ");       //몇번째 숫자를 받을 것인지 출력한다.
  scanf("%d", &number);                 //숫자를 입력받아 number에 할당
  
  printf("%d번째 피보나치 수열의 값은 %d\n",number, Fibo(number));  //원하는 번째의 피보나치 수열을 받는다. 
  
  return 0;
}

int Fibo(int n){                  //피보나치 함수

//f(n) = f(n-1)+f(n-2)
//f(n)= Fibo(n)
  
  if(n<=0){                        //n이 0보다 작거나 같으면 
    return 0;                      //리턴을 0으로 한다.
  }else if (n==1){                 //n이 1이라면  
    return 1;                      //1을 리턴한다.
  }else{                          //그외에 모든 경우에
    return Fibo(n-1)+ Fibo(n-2);   //Fibo(n-1)+Fibo(n-2)라는 재귀함수를 사용한다. 
  }
}