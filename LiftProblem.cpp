//There are 7 floors in BH3 and only 2 lifts. 
//Initially Lift A is at the ground floor and Lift B at the top floor.
// Whenever someone calls the lift from N th floor, the lift closest to that floor comes to 
// pick him up. If both the lifts are at equidistant from the N th floor, 
// them the lift from the lower floor comes up.
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int a=1,b=7,n;
	while(t-->0){
		cin>>n;
		int x=abs(n-a);
		int y=abs(b-n);
		if(x<=y){
			cout<<"A"<<"\n";
			a=n;
			cout<<a;
		}
		else{	
			cout<<"B"<<"\n";
			b=n;
	}
	}
	return 0;
}
