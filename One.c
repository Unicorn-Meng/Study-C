#include <stdio.h>

void First_C_Program(void);

int main(void){
  First_C_Program();
  return 0;
}

void First_C_Program(void){
  int a,b;
  a=10;
  b=7;
  a=a*b;
  printf("%d%s",a,"\n");
  printf("%s","This is the first C program!");
}
