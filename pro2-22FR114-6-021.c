#include<stdio.h>
#include<math.h>

struct shikaku_sui{
  double a;
  double h;
};

double V(struct shikaku_sui x){
  return (pow(x.a,2)*x.h)/3;
} 


int main(){
  struct shikaku_sui x;
  struct shikaku_sui y;
  struct shikaku_sui z;

  scanf("%lf%lf",&x.a,&x.h);
  scanf("%lf%lf",&y.a,&y.h);

  z.h=x.h+y.h;
  z.a=sqrt((V(x)+V(y))*3/y.h);

  printf("a=%lf h=%lf\n",z.a,z.h);

  return 0;
}
