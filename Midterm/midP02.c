#include <stdio.h>
#include <string.h>

int main(void) {

  char input[500];
  char output[500]={0};

  printf("Input charters:");
  fgets(input, 500, stdin);

  input[strlen(input)-1]='\0';
  
  for(int i=0; i<strlen(input); i++){
    output[i]=input[strlen(input)-1-i];
  }

  printf("backword:%s\n", output);
  return 0;
}