#include<stdio.h>

struct s{
  char name[20];
  int age;
};

int main(){
  struct s student[40];
  int i,a=0;

  for(i=0;i<40;i++){
    scanf("%s%d",student[i].name,&student[i].age);
  }
  int min=student[0].age;
  


  for(i=0;i<40;i++){
    if(student[i].age<min){
      a=i;
    }
  }

  printf("%s\n",student[a].name);

  return 0;
}

      

  
