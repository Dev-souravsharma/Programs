//This program find the factorial of Number. 
#include<stdio.h>
int main(){
	int n,i;
	double fact=1;
	printf("Enter Number:");
	scanf("%d",&n);	
	for(i=n;i>0;i--){
	fact=fact*i;
 }
  printf("%.lf",fact);	
	return 0;
}
