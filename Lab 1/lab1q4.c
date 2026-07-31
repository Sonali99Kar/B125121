# include <stdio.h>
struct product{
  int id ;
  char name[50];
  int price; 
  int quantity;
};
  int main (){
struct product s1;
// input
printf("enter  id:");
scanf("%d", &s1.id);
printf("enter name:");
scanf("%s", s1.name);
printf("enter price:");  
scanf("%d", &s1.price);
printf("enter quantity:");
scanf("%d", &s1.quantity);

// output
printf("\n book details\n");
printf("id : %d\n",s1.id);
printf("author name: %s\n",s1.name);
printf("price: %d\n", s1.price);
printf("quantity: %d\n", s1.quantity);
int cost = s1.price * s1.quantity;
printf("cost: %d", cost);
return 0;
  }
