#include <iostream>
using namespace std;
int main(){
	int num[10]={1,2,3,4,5,6,7,8,9,1};
	float sum=0;
	float avg=0;
	
	cout<<"Elements of this array: "<<endl;
	for (int i=0;i<10;i++){
		cout<<num[i]<<" "<<endl;
	}
	for (int i=0;i<10;i++){
		sum+=num[i];
	}
	avg=sum/10;
	cout<<"Sum of Array: ";
	cout<<sum<<endl;
	cout<<"Average of Array: ";
	cout<<avg<<endl;	
	
	
	return 0;
}
