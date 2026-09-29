#include <iostream>
using namespace std;
int main(){
	int arr[4]={1,2,3,4};
	int n=4;
	int pos=2;
	int value=5;
	
	cout<<"Before insertion:\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	for (int i=n-1;i>=pos;i--){
		
		arr[i+1]=arr[i];
		
	}
	arr[pos]=value;
	n++;
	cout<<"\nAfter insertion:\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
