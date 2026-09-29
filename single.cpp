#include <iostream>
using namespace std;
class Shape{
	public:
		void shape_type(string st){
		}
};
class rect:public Shape{
	public:
		float l,b,area,peri;
	public:
		void ARPR(float l,float b){
			area=l*b;
			peri=2* (l+b);
		}
		void display(){
			cout<<"Area of the rectangle: "<<area;
			cout<<"\nPerimeter of the rectangle: "<<peri;
		}
		
};
int main(){
	float l,b;
	string st;
	rect r;
	cout<<"Enter the shape type: ";
	cin>>st;
	cout<<"Enter l and b: ";
	cin>>l>>b;
	r.ARPR(l,b);
	r.display();
	return 0;
}
