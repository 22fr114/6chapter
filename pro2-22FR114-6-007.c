#include<stdio.h>

void swapchar(char *a1,char *a2){
  char tmp;
  tmp=*a1;
  *a1=*a2;
  *a2=tmp;
}

int main(){
  char c1='a';
  char c2='b';


  swapchar(&c1,&c2);

  printf("%c %c\n",c1,c2);

  return 0;
}
