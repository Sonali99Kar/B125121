# include <iostream>
using namespace std;
class student
{
    /* data */
    int roll;
    char name[50];
    int mark;
public:
//  input details
   void details (){
    cout<<("enter roll number ");
    cin>> roll;
    cout<<("enter name ");
    cin>> name;
    cout<<("enter mark ");
    cin>> mark;
    
   }
   // output
   void prnt (){
    cout<<("roll number: ")<< roll;
    cout<<("\n name ") << name;
    cout<<("\n mark ") << mark;
   }
};
 int main () {
    student s1;
     s1.details ();
     s1.prnt ();
    return 0;
 }
