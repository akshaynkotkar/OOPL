#include<iostream>
using namespace std;
class shape
{
	protected:
		double base,length;
		public:
		void get_data()
		{
			cout<<"Enter the base:";
			cin>>base;
			cout<<"Enter the length:";
			cin>>length;
		}
	virtual void are_a()
	{
		cout<<"This is a function(In the base class) ";
	}
};
 class rectangle:public shape
{
	void are_a()
	{
		cout<<"The area of rectangle is:"<<(base*length)<<endl;
		
	}
};
class triangle:public shape
{
	void are_a()
	{
		cout<<"The area of Triangle is:"<<((base*length)/2)<<endl;
	}
	};
	
	
	
int main()
{
	int ch;
	int ch1;
	rectangle r;
	triangle t;
	shape *ptr;
	do
	{
		cout<<"1.Area of rectangle\n 2.Area of triangle\n";
		cout<<"Enter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
			ptr=&r;
			ptr->get_data();
			ptr->are_a();
			break;
			case 2:
				ptr=&t;
			ptr->get_data();
			ptr->are_a();
				break;
			default:
			cout<<"Enter valid choice:";		
		}
		cout<<"Do you want to continue??";
		cin>>ch1; 
	}while(ch1==1);

	return 0;	
}