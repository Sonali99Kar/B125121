# include <stdio.h>
struct rectangle{
  int length ;
  int breadth; 
};
  int main (){
    int i;
struct rectangle e1;
// input

    

printf("enter length:");
scanf("%d", &e1.length);
printf("enter breadth:");  
scanf("%d", &e1.breadth);
int area =  e1.length*e1.breadth;
printf("area:%d\n", area);
int per=2*( e1.length+e1.breadth);
printf("perimeter:%d", per);
return 0;
  }
