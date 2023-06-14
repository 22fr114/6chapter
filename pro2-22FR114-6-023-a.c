#include<stdio.h>

struct point{
  double x;
  double y;
  double z;
};
void P(struct point p1, struct point p2, struct point p3) {
  double a, b, c, d;

  a = (p2.y - p1.y) * (p3.z - p1.z) - (p3.y - p1.y) * (p2.z - p1.z);
  b = (p2.z - p1.z) * (p3.x - p1.x) - (p3.z - p1.z) * (p2.x - p1.x);
  c = (p2.x - p1.x) * (p3.y - p1.y) - (p3.x - p1.x) * (p2.y - p1.y);
  d = -a * p1.x - b * p1.y - c * p1.z;

  printf("%lfx+(%lf)y+(%lf)z+(%lf)=0\n",a,b,c,d);
}

int main(){
  struct point a;
  struct point b;
  struct point c;

  scanf("%lf%lf%lf",&a.x,&a.y,&a.z);
  scanf("%lf%lf%lf",&b.x,&b.y,&b.z);
  scanf("%lf%lf%lf",&c.x,&c.y,&c.z);

  

  P(a,b,c);

  return 0;
}
