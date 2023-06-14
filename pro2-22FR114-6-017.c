#include<stdio.h>

typedef struct {
  int a;
  int b;
  int c;
} shop;

int max(shop o){
  int sum=0;
  sum=o.a*3+o.b*5+o.c*6;
  return sum;
}


int main(){
  shop A={100,180,150};
  shop B={70,200,110};
  shop C={120,150,160};
  shop D={110,180,120};

  int ta,tb,tc,td;
  ta=max(A);
  tb=max(B);
  tc=max(C);
  td=max(D);

  int min=ta;

  if(tb<min)
    min=tb;
  if(tc<min)
    min=tc;
  if(td<min)
    min=td;


  if(min==ta)
    printf("A");
  if(min==tb)
    printf("B");
  if(min==tc)
  printf("C");
  if(min==td)
  printf("D");


  return 0;
}


  
