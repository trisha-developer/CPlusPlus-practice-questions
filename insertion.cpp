#include <iostream>
using namespace std;
int main(){
	int arr[4]={1,2,3,4};
	int n=4,pos=4;
	int value=152;
	
	cout<<"Before insertion:\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	for(int i=pos;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	n--;
	cout<<"\nAfter insertion:\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	
	return 0;
}
