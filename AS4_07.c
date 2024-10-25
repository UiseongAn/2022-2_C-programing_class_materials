//안의성 / 22200422
//입력한 알파벳이 소문자면 대문자로 바꾸어주는 프로그램

#include <stdio.h>
#include <string.h>

void chString(char *S);//알파벳이 소문자면 대문자로 바꾸어주는 함수

int main(void) {
  char str[80];//입력할 문장을 저장할 변수

  printf("Input String:");//입력을 하라고 출력
  scanf("%s", str);//입력한 문장을 str에 할당
  chString(str);//알파벳이 소문자면 대문자로 바꾸어주는 함수
  printf("UpperCase: %s", str);//str을 출력
  
  return 0;
}

void chString(char *S){

  char s[80];//문장을 편하게 편집할수있게 새로 저장할 변수

  strcpy(s, S);//s에 S의 문장을 붙여넣기
  for(char i=0; i<strlen(S); i++){//for문으로 S문장 길이 만큼 반복
    if('a'<= s[i] && s[i] <= 'z'){//소문자이면
      s[i] -= 'a'-'A';//대문자로변할만큼의 아스키코드를 빼준다.
    }
  }
  strcpy(S, s);//S에 s문장을 붙여넣기
}