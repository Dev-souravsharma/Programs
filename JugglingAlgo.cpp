#include<iostream> 
using namespace std;
int gcd(int a,int b);
void rotate(int arr[],int size,int k);
int main(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
		for(int i=0;i<n;i++){
		cout<<" "<<arr[i]<<"\n";
	}	
	rotate(arr,n,k);
		for(int i=0;i<n;i++){
		cout<<" "<<arr[i];
	}
return 0;
}
int gcd(int a,int b){
	if(a==0)
		return b;
		return gcd(b%a,a);
}
void rotate(int arr[],int size,int k){
	int temp,j,d,i;
	for(i=0;i<gcd(size,k);i++){
		temp=arr[i];
		j=i;
		while(1){
			d=(j+k)%size;
			if(d==i)
				break;
			arr[j]=arr[d];
			j=d;	
		}
		arr[j]=temp;
	}
}
