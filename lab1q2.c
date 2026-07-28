# include <stdio.h>
struct employee{
  int id ;
  char name[50];
  int salary; 
};
  int main (){
    int i;
struct employee e1;
struct employee e2;
struct employee e3;
// input

    

printf("enter id:");
scanf("%d", &e1.id);
printf("enter name:");
scanf("%s", e1.name);
printf("enter salary:");  
scanf("%d", &e1.salary);
    

printf("\n employee details\n");
printf("id : %d\n",e1.id);
printf("name: %s\n",e1.name);
printf("salary: %d\n", e1.salary);


printf("enter id:");
scanf("%d", &e2.id);
printf("enter name:");
scanf("%s", e2.name);
printf("enter salary:");  
scanf("%d", &e2.salary);
    

printf("\n employee details\n");
printf("id : %d\n",e2.id);
printf("name: %s\n",e2.name);
printf("salary: %d\n", e2.salary);


printf("enter id:");
scanf("%d", &e3.id);
printf("enter name:");
scanf("%s", e3.name);
printf("enter salary:");  
scanf("%d", &e3.salary);
    

printf("\n employee details\n");
printf("id : %d\n",e3.id);
printf("name: %s\n",e3.name);
printf("salary: %d\n", e3.salary);

return 0;
  }