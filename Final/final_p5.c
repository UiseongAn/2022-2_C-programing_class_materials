#include <stdio.h>

int main(void) {
  FILE* file = fopen("Data.txt", "r");
  char str[100];
  char dummy;
  int N;

  if(fgets(str,100, file)==0){
      printf("Can not opne file\n");
    }
  
  while(1){
    if(fgets(str,100, file)==0){
      break;
    }
    printf("%s", str);
  }
  fclose(file);
  return 0;
}