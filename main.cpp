#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    int n;
    cout<<"Enter Number for factorial"<<endl;

    cin >>n;
    cout<<"The factorial of"<< n<<" is "<< factorial(n)<< endl;
    return 0;
}
