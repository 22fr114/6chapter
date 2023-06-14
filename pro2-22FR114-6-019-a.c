#include<stdio.h>

struct point{
  double x;
  double y;
};


int main(){
  struct point s;
  struct point t;
  double a,b;

  scanf("%lf%lf%lf%lf",&s.x,&s.y,&t.x,&t.y);

  a=(t.y-s.y)/(t.x-t.y);
  b=s.y-a*s.x;

  printf("y=%lfx+%lf\n",a,b);

  return 0;
}
