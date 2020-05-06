//This Program Swap number using XOR.
#include<stdio.h>
void swap(int a,int b);
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	swap(a,b);
	return 0;
}
void swap(int a,int b){
	printf("Before Swaping Value A is:%d\nValue of B is:%d\n",a,b);
	a=a^b;
	b=b^a;
	a=a^b;
	printf("After Swaping Value A is:%d\nValue of B is:%d",a,b);
}
