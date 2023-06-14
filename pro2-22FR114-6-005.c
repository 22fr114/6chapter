#include<stdio.h>

typedef struct{
  char name[100];
  int gold;
}thing;

void dis(thing *th, float rate){
  float dis =th->gold*rate/100;
  th->gold-=dis;

  printf("%d %f\n",th->gold,rate);
}


int main(){
  thing th;
  float rate;
  scanf("%s%d%f",th.name,&th.gold,&rate);

  dis(&th,rate);

  return 0;
}
