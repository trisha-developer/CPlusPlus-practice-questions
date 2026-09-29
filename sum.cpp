#include <iostream>
using namespace std;
int main(){
	int arr1[3][3],arr2[3][3],sum[3][3];
	cout<<"Enter 9 elements of th first matrix:\n";
	for (int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			cin>>arr1[i][j];
//			cin>>arr2[i][j];
			
		}
	}
	cout<<"The first matrix:\n";
	for (int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			cout<<arr1[i][j]<<"\t";
//			cout<<arr2[i][j]<<"\t";
			
		}
		cout<<endl;
	}
	cout<<"Enter 9 elements of the second matrix:\n";
	for (int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
//			cin>>arr1[i][j];
			cin>>arr2[i][j];
			
		}
	}
	cout<<"The second matrix:\n";
	for (int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
//			cout<<arr1[i][j]<<"\t";
			cout<<arr2[i][j]<<"\t";
			
		}
		cout<<endl;
	}
	cout<<"Sum of two matrix: \n";
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			sum[i][j]=arr1[i][j]+arr2[i][j];
			cout<<sum[i][j]<<"\t";
			
		}
		cout<<endl;
	}
	return 0;
}
