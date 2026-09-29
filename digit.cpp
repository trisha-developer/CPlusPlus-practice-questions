#include <iostream>
using namespace std;
int main(){
	char val;
	cout<<"Enter your value: ";
	cin>>val;
	if(val<=0&& val<9){
		cout<<"It's a digit";
	}
	else{
		cout<<"It's not a digit";
	}
}
