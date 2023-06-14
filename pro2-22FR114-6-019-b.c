#include<stdio.h>
#include<math.h>

struct point{
  double x;
  double y;
};

double distance(struct point p1, struct point p2) {
  return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}
struct circle {
  double centerX;
  double centerY;
  double radius;
};


struct circle cal(struct point p1, struct point p2, struct point p3) {
  double a = p2.x - p1.x;
  double b = p2.y - p1.y;
  double c = p3.x - p1.x;
  double d = p3.y - p1.y;
  double e = a * (p1.x + p2.x) + b * (p1.y + p2.y);
  double f = c * (p1.x + p3.x) + d * (p1.y + p3.y);
  double g = 2 * (a * (p3.y - p2.y) - b * (p3.x - p2.x));

  double centerX = (d * e - b * f) / g;
  double centerY = (a * f - c * e) / g;
  double radius = distance(p1,p2);

  struct circle result = { centerX, centerY, radius };
  return result;
}




int main(){
  struct point s;
  struct point t;
  struct point u;
  struct circle c;

  scanf("%lf%lf",&s.x,&s.y);
  scanf("%lf%lf",&t.x,&t.y);
  scanf("%lf%lf",&u.x,&u.y);

  c = cal(s,t,u);
  printf("(x - %.2lf)^2 + (y - %.2lf)^2 = %.2lf^2\n", c.centerX, c.centerY, c.radius);

  return 0;
}
