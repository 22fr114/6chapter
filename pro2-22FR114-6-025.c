#include<stdio.h>


struct address{
  int a;
};

struct student{
  char number[10];
  char name[20];
  int age;
  struct address addr;
};

int main(){
  struct student person;

  scanf("%s%s%d%d",person.number,person.name,&person.age,&person.addr.a);

  printf("%s\n",person.number);
  printf("%s\n",person.name);
  printf("%d\n",person.age);
  printf("%d\n",person.addr.a);

  return 0;
}
  
