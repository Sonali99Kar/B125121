# include <stdio.h>
struct student{
  int rollnumber ;
  char name[50];
  int c; 
  int physics;
  int mathematics;
};
  int main (){
struct student s1;
// input
printf("enter roll number:");
scanf("%d", &s1.rollnumber);
printf("enter name:");
scanf("%s", s1.name);
printf("enter mark in c:");  
scanf("%d", &s1.c);
printf("enter mark in physics:");  
scanf("%d", &s1.physics);
printf("enter mark in mathematics:");  
scanf("%d", &s1.mathematics);


// output
printf("\n student details\n");
printf("roll number : %d\n",s1.rollnumber);
printf("name: %s\n",s1.name);
int mark = s1.c+s1.physics+s1.mathematics;
printf("total mark is %d\n",mark);
int avg = (s1.c+s1.physics+s1.mathematics)/3;
printf("average is %d", avg);
return 0;
  }