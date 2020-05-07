#include<stdio.h>
int gcd(int a,int b){
	if(a==0)
		return b;
		return gcd(b%a,a);
}
int lcm(int n){
	int ans=1;
	int i;
	for(i=1;i<=n;i++){
		ans=ans*i/gcd(ans,i);
	}
	return ans;
}
int main(){
	int n;
	scanf("%d",&n);
	int z;
	z=lcm(n);
	printf("%d",z);
}
