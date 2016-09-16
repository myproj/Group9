//Group -9(Assignment-2)
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int n;
//	cin >> n;
	scanf("%d",&n);  //user input
	int n1=n,s=0;
	int k;
	if(n1 < 0)
		n1=-n1;
	while(n1 > 0){
//<<<<
//		s+=n1%10;   //Digitwise addition
//		n1=n1/10;
//	}
//	if(n < 0)
//		cout<<"Sum of Digits is " <<(-s)<<endl;
//	else cout<<"Sum of Digits is " <<s<<endl;
//=======
		k=n1%10;
		s+=k;
		n1=n1/10;
	}
	if(n < 0){
		s = s-2*k;     //checking weather number is negative or not
		printf("Sum of Digits is %d\n",s);
	}
	else printf("Sum of Digits is %d\n",s);
//>>>>>>> newbranch

	return 0;
}

