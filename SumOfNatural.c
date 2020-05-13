//This program find sum of natural number using recursion.
#include<stdio.h>
typedef long long int lli;
int naturalNumber(lli n){
	if(n==1)
		return 1;
		return n+naturalNumber(n-1);
}
int main(){
	typedef long long int lli;
	lli n;
	scanf("%lld",&n);
	lli m=naturalNumber(n);
	printf("%d\n",m);
	return 0;
}
