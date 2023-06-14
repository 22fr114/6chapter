#include<stdio.h>

typedef struct{
  int x;
  int y;
}table;


int main(){
  table a;
  int ans;

  scanf("%d%d",&a.x,&a.y);

  ans=a.x*a.y;

  printf("%d\n",ans);

  return 0;
}


  
