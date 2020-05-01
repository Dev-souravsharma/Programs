#include<stdio.h>
int lcm(int a,int b){
int n;
	n=a*b;
	int z;
	z=gcd(a,b);
	printf("\t\tLcm of Two number is:%d",n/z);
}
int gcd(int a,int b){
	if(a==0)
		return b;
		return gcd(b%a,a);
}
int main(){
	printf("This program find LCM of two Number:\n");
	printf("\tEnter two Number:");
	int a,b;
	scanf("%d %d",&a,&b);
	lcm(a,b);
	return 0;
}
