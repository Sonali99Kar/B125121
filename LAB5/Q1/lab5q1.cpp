# include<iostream>
# include<iomanip>
int calculate (int a,int b){
    return a+b;
}
int calculate (int a,int b,int c){
    return a+b+c;
}
double calculate (double a, double b){
    return a*b;
}
int main(){
    int add1 = calculate(9,12);
    int add2 = calculate(9, 13, 23);
    double mul = calculate (9.2 , 9.4);
    std::cout << "result"<< std::endl;
    std::cout << "addition of 9 and 12 is"<< add1 << std::endl;
    std::cout << "addition of 9 , 13 , 23 is"<< add2 << std::endl;
    std::cout << "multiplication of 9.2 , 9.4 is "<< mul << std::endl;
    return 0;
}
