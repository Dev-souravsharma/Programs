//This program find kth largest element 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	//Unsorted array
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"\n";
	//performing sort operation using bubble sort 
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				arr[j]=arr[j]^arr[j+1];
				arr[j+1]=arr[j]^arr[j+1];
				arr[j]=arr[j]^arr[j+1];
			}
		}
	}
	//sorted array
		for(int i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	//Removing dublicate elements
	 for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; )
        {
            if(arr[j] == arr[i])
            {
                for(int k = j; k < n; k++)
                {
                    arr[k] = arr[k+1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }
	//----------------------------------
	//Array in which there is no dublicate elements
	cout<<"\n";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	int k;
	cout<<"\nEnter Kth element";
	cin>>k;
	if(k>n)
		cout<<"Element can not be greater";
	else
		cout<<"Largest kth element is:"<<arr[n-k-1];
	return 0;
}
