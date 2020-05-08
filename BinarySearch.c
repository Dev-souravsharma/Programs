//This program find an element using binary search
#include<stdio.h>
int main(){
	int size,i,j,element;
	scanf("%d %d",&size,&element);
	int arr[size];
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	//sorting array elements using bubble sort
	for(i=0;i<size-1;i++){
		for(j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1]){
				arr[j]=arr[j]^arr[j+1];
				arr[j+1]=arr[j]^arr[j+1];
				arr[j]=arr[j]^arr[j+1];
			}
		}
	}
	//
	//Binary Search logic
	int first=0;
	int last=size-1;
	int mid=(first+last)/2;
	while(first<=last){
		if(arr[mid]>element)
			last=mid-1;
		else if(arr[mid]==element)
			{
				printf("Your element is: %d Found at %d",element,mid+1);
				break;
			}
		else 
			first=mid+1;
			mid=(first+last)/2;	
			}
			if(first>last)
			printf("Not Found");
	//
}
