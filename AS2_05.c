#include <stdio.h>

//안의성 / 22200422
// 3,6,9단을 출력하는 프로그램

int main(void) {
  for(int i=1; i<=9; i++){                     //구구단을 반복하는 for문
    for(int j=1; j<=3; j++){                   //3,6,9단만 반복하는 for문
      if(j==1 && i>3){                         //만약 3단에서 단 개수가 3을 초과하면
        printf("        ");                    //공백을 출력해라
      }else if (j == 2 && i>6){                //만약 6단에서 단 개수가 6을 초과하면 
        printf("        ");                    //공백을 출력해라
      }else{                                   //둘 다 해당이 안되면
      printf("%d*%d=%02d  ", 3*j,i,3*j*i);     //구구단을 출력해라
      }
    }
    printf("\n");                              //한 줄을 띄워준다.
  }
  return 0;
}