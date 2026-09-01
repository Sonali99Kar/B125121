 # include <iostream>
using namespace std ;
 void updateStatus(int *status) {
    if (*status == 1) {
        *status = 2;
    }else if( *status == 2){
        *status = 3;
    }
 }
 int main (){
    int ors = 1 ;
    // status
    cout<< "status code 1 : processing" <<endl;
    cout<< "status code 2 : shipped"<<endl;
    cout<< "status code 3 : delivered"<<endl;

    cout << "status before calling the function " << ors << endl;
    // update
    updateStatus (&ors);
    cout << "status after calling the function " << ors << endl;
    //update
    updateStatus (&ors);
    cout << "status after calling the function twice " << ors << endl;
 }