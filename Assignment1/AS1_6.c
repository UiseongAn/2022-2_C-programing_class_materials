#include <stdio.h>

//안의성 / 2022 / 09 / 25
//두자리 숫자를 입력 받아 그것을 영어로 출력되는 프로그램
//C프로그래밍 과제 6

int main(void) {
 
  int number;                                 //입력 받을 숫자의 변수

  printf("Enter number(1~99): ");           //1부터99사이의 수를 입력하라는 것을 출력
  scanf("%d", &number);                     //수를 입력받음
  
  if (number<1 || number>99 ) {            //지정된 숫자가 아니면 다시 하라는 메시지를 출력
    printf("Enter numbers between 1 and 99");
    printf("Try again"); 
    }
  
  if (number>=10 && number<=19){           //10~19는 영어가 규칙적이지 않기때문에 따로 분리해준다. 
    
    switch(number){                        //스위치문을 이용하여 알맞는 영어 단어를 출력한다.
      case 10: printf("ten\n");            //입력받은수가 알맞는 케이스면 지정된 문자를 출력한다. 
        break;                             //스위치문을 빠져나온다.
      case 11: 
        printf("eleven\n");                //위와 같다
        break;
      case 12: 
        printf("twelve\n");    
        break;
      case 13: 
        printf("thirteen\n");  
        break;
      case 14: 
        printf("fourteen\n");  
        break;
      case 15: 
        printf("fifteen\n");   
        break;
      case 16: 
        printf("sixteen\n");   
        break;
      case 17: 
        printf("seventeen\n"); 
        break;
      case 18: 
        printf("eighteen\n");  
        break;
      case 19: 
        printf("nineteen\n");  
        break;
      default:  break;  
    }
  }else{ 
    
    switch( number / 10 ) {                    //10의 자리수를 출력하는 스위치 문
      case 2: printf("twenty ");               //10으로 나누었을때 정수부분이 2가 나오면 지정된 문자를 출력한다.
        break;                                 //스위치문을 빠져나온다.
      case 3: printf("thirty ");               //위와 같다.
        break;
      case 4: printf("forty ");     
        break;
      case 5: printf("fifty ");     
        break;
      case 6: printf("sixty ");     
        break;
      case 7: printf("seventy ");   
        break;
      case 8: printf("eighty ");    
        break;
      case 9: printf("ninety ");    
        break; 
      default: printf(" ");                   //1이 나올 경우는 위에서 먼저 실행해줬으니, 0일 경우 공백을 출력 해준다.
        break; 
    } 
    
    switch( number % 10 ){                   //1의 자리 숫자를 출력하는 스위치문
      case 0: printf("\n");                  //1의자리 숫자가 0일 때 \n을 출력해준다
        break;                               //스위치문을 빠져나온다.
      case 1: printf("one\n");               //위와 같다.
        break;
      case 2: printf("two\n");    
        break;
      case 3: printf("three\n");  
        break;
      case 4: printf("four\n");   
        break;
      case 5: printf("five\n");   
        break;
      case 6: printf("six\n");     
        break;
      case 7: printf("seven\n");   
        break;
      case 8: printf("eight\n");  
        break;
      case 9: printf("nine\n");   
        break;
      default:                                    //그외 다른경우에는 스위치문을 빠져나온다.
        break; 
    }
  }
  
  return 0;
}
