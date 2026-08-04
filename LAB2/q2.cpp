# include <iostream>
using namespace std;
// rectangle calculator
class rectangle
{
    /* data */
int length;
int breadth;
int area;
int perimeter;
public:
    void dimension (){
        cout<<(" enter length: ");
        cin>> length;
        cout<<(" enter breadth: ");
        cin>> breadth;
    }
    void rarea (){
    area = length*breadth;
    }
    void rperimeter(){
        perimeter = 2*length+ 2*breadth;
    }
    void details (){
        cout<<("\n details \n");
        cout<<("length : ")<< length;
        cout<<("\n breadth:")<<breadth;
        cout<<("\n perimeter: ")<<perimeter;
        cout<<("\n area:")<<area;
    }
};
int main(){
    rectangle r1;
     r1.dimension ();
     r1.rarea ();
    r1.rperimeter();
     r1.details ();
}