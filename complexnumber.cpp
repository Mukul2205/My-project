#include<iostream>
using namespace std;
class complex{
	private:
		
		int i;
		int a;
	public:
		void setdata(int m,int n){
			a=m;
			i=n;
		}
		void getdata(){
			cout<<"The complex no. is "<<a<<"+"<<i<<"i"<<endl;
		}
		complex operator+(complex x){
			complex y;
			y.a=a+x.a;
			y.i=i+x.i;
			return y;
		}
		complex operator-(complex x){
			complex y;
			y.a=a-x.a;
			y.i=i-x.i;
			return y;
		}
		complex operator*(complex x){
			complex y;
			y.a=a*x.a;
			y.i=i*x.i;
			return y;
		}
};
int main(){
	complex c1;
	c1.setdata(5,7);
	complex c2;
	c2.setdata(3,4);
	cout<<"First complex no."<<endl;
	c1.getdata();
	cout<<"Second complex no."<<endl;
	c2.getdata();
	complex c3;
	cout<<"After Adding"<<endl;
	c3=c1+c2;
	c3.getdata();
	cout<<"After Subtracting"<<endl;
	c3=c1-c2;
	c3.getdata();
	cout<<"After Multiplying"<<endl;
	c3=c1*c2;
	c3.getdata();

}
