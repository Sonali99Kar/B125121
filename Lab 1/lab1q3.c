# include <stdio.h>
struct book{
  int id ;
  char name[50];
  int price; 
  char title[100];
};
  int main (){
struct book s1;
// input
printf("enter  id:");
scanf("%d", &s1.id);
printf("enter name:");
scanf("%s", s1.name);
printf("enter price:");  
scanf("%d", &s1.price);
printf("enter title:");
scanf("%s", &s1.title);

// output
printf("\n book details\n");
printf("id : %d\n",s1.id);
printf("author name: %s\n",s1.name);
printf("price: %d\n", s1.price);
printf("title: %c\n", s1.title);
return 0;
  }
