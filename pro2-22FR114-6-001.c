#include<stdio.h>

struct person{
  char name[20];
  int num;
  char me;
  int high;
};


int main(){
  struct person stu[5];
  int i;

  for(i=0;i<5;i++){
    scanf("%s",stu[i].name);
    scanf("%d",&stu[i].num);
    getchar();
    scanf("%c",&stu[i].me);
    scanf("%d",&stu[i].high);
  }

  for(i=0;i<5;i++){
    printf("%s\n",stu[i].name);
    printf("%d\n",stu[i].num);
    printf("%c\n",stu[i].me);
    printf("%d\n",stu[i].high);
  }

  return 0;
}
