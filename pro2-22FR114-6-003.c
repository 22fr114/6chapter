#include<stdio.h>
#include<math.h>

typedef struct{
  float x;
  float y;
  float dim;
}zahyo;

zahyo *maxdim(zahyo *d, int size) {
  zahyo *max = &d[0];
    int i;

    for (i=0;i<size;i++){
        d[i].dim=sqrt(d[i].x * d[i].x + d[i].y * d[i].y);

        if (d[i].dim > max->dim) {
            max=&d[i];
        }
    }

    return max;
}

int main(){
  zahyo d[10];
  int i;

  for(i=0;i<10;i++){
    scanf("%f%f",&d[i].x,&d[i].y);
  }

  zahyo *max=maxdim(d,10);

  printf("%f,%f\n",max->x,max->y);
  printf("%f\n",max->dim);

  return 0;
}
