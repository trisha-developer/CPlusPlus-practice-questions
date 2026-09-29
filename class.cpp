//#include <iostream>
//using namespace std;
//class rectangle{
//	public:
//		void area(float l,float b){
//			float area= l*b;
//			cout<<"Area of rect: "<<area<<endl;
//		}
//		void peri(float l,float b){
//			float peri=2 *(l+b);
//			cout<<"Perimeter of rect: "<<peri;
//		}
//};
//int main(){
//	float l,b;
//	cout<<"Enter the length and breadth of the rectangle: ";
//	cin>>l>>b;
//	rectangle r;
//	r.area(l,b);
//	r.peri(l,b);
//}
//#include <iostream>
//using namespace std;
//class square{
//	public:
//		void area(float a){
//			float area=a*a;
//			cout<<"Area of the square: "<<area<<endl;
//		}
//		void peri(float a){
//			float peri=4*a;
//			cout<<"Perimeter of the square: "<<peri;
//		}
//		
//};
//int main(){
//	float a;
//	cout<<"Enter the side of the square: ";
//	cin>>a;
//	square s;
//	s.area(a);
//	s.peri(a);
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class circle{
//	public:
//		void area(double r){
//			double area=3.14*r*r;
//			cout<<"Area of a circle: "<<area<<endl;
//		}
//		void cir(double r){
//			double cir=2*3.14*r;
//			cout<<"circumference of a circle: "<<cir;
//		}
//};
//int main(){
//	double r;
//	cout<<"Enter the value of radius: ";
//	cin>>r;
//	circle c;
//	c.area(r);
//	c.cir(r);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//class student{
//	public:
//		void total(float sub1,float sub2,float sub3){
//			float total=sub1+sub2+sub3;
//			cout<<"Total marks "<<total<<endl;
//		}
//		void avg(float sub1,float sub2,float sub3){
//			float avg=sub1+sub2+sub3/3;
//			cout<<"Average marks: "<<avg;
//		}
//};
//int main(){
//	float sub1,sub2,sub3;
//	cout<<"Enter the marks for three subjects: ";
//	cin>>sub1>>sub2>>sub3;
//	student s;
//	s.total(sub1,sub2,sub3);
//	s.avg(sub1,sub2,sub3);
//	return 0;
//}
#include <iostream>
using namespace std;
class temp{
	public:
		void fah(double c){
			double f=(1.8*c)+32;
			cout<<"celsius to Fahrenheit: "<<f<<endl;
		}
		void cel(double f){
			double cel=(f-32)*0.55;
			cout<<"Fahrenheit to celsius: "<<cel; 
		}
};
int main(){
	double c,f;
	cout<<"Enter the tempareture in celsius: ";
	cin>>c>>f;
	temp t;
	t.fah(c);
	t.cel(f);
}
