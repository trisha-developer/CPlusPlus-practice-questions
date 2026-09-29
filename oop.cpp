#include <iostream>
using namespace std;
class shape{
	public:
		string type;
		void shape_type(string ts){
			type=ts;
		}
};
class rect: public shape
{
	public:
		float l,b,area,peri;
		void arpr(){
			area=(l*b);
			peri=2*(l+b);
		}
		void display(){
			cout<<"\nArea: "<<area;
			cout<<"\nPerimeter: "<<peri;
		}
};
int main(){
	rect r;
	float l,b;
	cout<<"Enter the type of shape: ";
	string type;
	cin>>type;
	cout<<"Enter l and b: ";
	cin>>l>>b;
	r.arpr();
	r.display();
}
