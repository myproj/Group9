//Group -9(Assignment-2)
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int n1=n,s=0;
	if(n1 < 0)
		n1=-n1;
	while(n1 > 0){
		s+=n1%10;   //Digitwise addition
		n1=n1/10;
	}
	if(n < 0)
		cout<<"Sum of Digits is " <<(-s)<<endl;
	else cout<<"Sum of Digits is " <<s<<endl;

	return 0;
}