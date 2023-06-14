#include<stdio.h>
#include<math.h>

struct point {
  double x;
  double y;
  double z;
};

double distance(struct point p1, struct point p2) {
  return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) + pow(p2.z - p1.z, 2));
}

void S(struct point p1, struct point p2, struct point p3, struct point p4) {
  double centerX, centerY, centerZ, radius;

  centerX = (p1.x + p2.x + p3.x + p4.x) / 4.0;
  centerY = (p1.y + p2.y + p3.y + p4.y) / 4.0;
  centerZ = (p1.z + p2.z + p3.z + p4.z) / 4.0;

  
  radius = distance(p1, (struct point){centerX, centerY, centerZ});

  
  printf("(x - %.2lf)^2 + (y - %.2lf)^2 + (z - %.2lf)^2 = %.2lf^2\n", centerX, centerY, centerZ, radius);
}


int main(){
  struct point a,b,c,d;
  
  scanf("%lf%lf%lf",&a.x,&a.y,&a.z);
  scanf("%lf%lf%lf",&b.x,&b.y,&b.z);
  scanf("%lf%lf%lf",&c.x,&c.y,&c.z);
  scanf("%lf%lf%lf",&d.x,&d.y,&d.z);

  S(a,b,c,d);

  return 0;
}
