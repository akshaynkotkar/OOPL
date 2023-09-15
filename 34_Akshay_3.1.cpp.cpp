#include<iostream>
using namespace std;
class shape
{
	int length,base;
	float r;
	public:
	/*	void getdata()
		{
			cout<<"Enter length of rectangle";
			cin>>length;
			cout<<"Enter breadth of rectangle:";
			cin>>base;
			cout<<"Enter radius of circle:";
			cin>>r;
			
		}*/
			int area(int l,int b)
		{
			return(l*b);
		}
int  area(float n)
		{
			return(3.142*n*n);
		}
	
};
/*	void shape::area(int l,int b)
		{
			return(l*b);
		}
	void shape:: area(float n)
		{
			return(3.142*n*n);
		}*/
int main()
{
	shape s;
	int x,y;
	float z;
	//s.getdata();
	cout<<"The area of rectangle is:"<<s.area(2,5)<<endl;
	cout<<"The area of circle is:"<<s.area(2.5)<<endl;
//	cout<<"The area of rectangle is:"<<s.area(x,y)<<endl;
//	cout<<"The area of circle is:"<<s.area(z)<<endl;
	return 0;
}