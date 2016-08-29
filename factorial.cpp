#include "functions.h"
#include <iostream>

using namespace std;
// shubham
int factorial1(int  n){
	if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;

}


int factorial(int n){
	int k;
	if( n < 0){
		cout<<"Negative Number not allowed : Enter positve number\n";
		cin>>k;
		while(k<0){
			cout<<"Negative Number not allowed : Enter positve number\n";
			cin>>k;
		}
		n=k;
	}
    return factorial1(n);
}
