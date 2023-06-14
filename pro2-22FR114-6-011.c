#include<stdio.h>

typedef struct{
  double r;
  double i;
}comp;

int main(){
  comp p,q,r;

  scanf("%lf%lf",&p.r,&p.i);
  scanf("%lf%lf",&q.r,&q.i);

  double d=q.r*q.r+q.i*q.i;


  comp ans;

  ans.r=(p.r*q.r+p.i*q.i)/d;
  ans.i=(p.i*q.r-p.r*q.i)/d;


  printf("%f %fi\n",ans.r,ans.i);

  return 0;
}


  
  
