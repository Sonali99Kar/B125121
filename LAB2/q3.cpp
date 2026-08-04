# include <iostream>
using namespace std;
class student
{
    /* data */
    int num1;
    int num2;
    int sum;
    int sub;
    int mul;
    int div;
public:
//  input details
void details (){
    cout<<("enter number:");
    cin>> num1;
    cout<<("enter number : ");
    cin>> num2;
}
void add (){
    sum = num1+num2;
    }
    void numsub (){
    sub = num1-num2;
    }
    void nummul (){
    mul = num1*num2;
    }
     void numdiv (){
    div = num1/num2;
    }
};

int main(){
    student s1;
s1.details ();
s1.add ();
s1.numsub ();
s1.nummul ();
s1.numdiv ();
return 0;
}