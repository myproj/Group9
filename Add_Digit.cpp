#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int n1=n,s=0;
	if(n1 < 0)
		n1=-n1;
	while(n1 > 0){
		s+=n1%10;
		n1=n1/10;
	}
	if(n < 0)
		printf("Sum of Digits is %d\n",-s);
	else printf("Sum of Digits is %d\n",s);

	return 0;
}