# include <stdio.h>
struct student{
  int rollnumber ;
  char name[50];
  int age; 
  float cgpa;
};
  int main (){
struct student s1;
// input
printf("enter roll number:");
scanf("%d", &s1.rollnumber);
printf("enter name:");
scanf("%s", s1.name);
printf("enter age:");  
scanf("%d", &s1.age);
printf("enter cgpa:");
scanf("%f", &s1.cgpa);

// output
printf("\n student details\n");
printf("roll number : %d\n",s1.rollnumber);
printf("name: %s\n",s1.name);
printf("age: %d\n", s1.age);
printf("cgpa: %f\n", s1.cgpa);
return 0;
  }
