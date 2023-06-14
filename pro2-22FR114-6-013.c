#include<stdio.h>

typedef struct{
  int num;
  char name[20];
  char name2[20];
  int num1;
}address;


int main(){
  address a;

  scanf("%d%s%s%d",&a.num,a.name,a.name2,&a.num1);


  printf("%d %s %s %d",a.num,a.name,a.name2,a.num1);

  return 0;
}
