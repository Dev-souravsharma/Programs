#include<stdio.h>
//fuction Decleration 
int gcd(int a,int b);
int main(){
	int a,b=0,n;
	printf("This Program find GCD(HCF) Two Number:\n\tEnter Two Number:");
	scanf("%d %d",&a,&b);
	n=gcd(a,b);
	printf("GCD is:%d",n);
	return 0;
}
//function Defination 
int gcd(int a,int b){
	if(a==0)
		return b;
		return gcd(b%a,a);
}
