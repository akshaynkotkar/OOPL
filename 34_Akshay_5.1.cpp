#include<iostream>
using namespace std;
class shape
{
	protected:
		double length;
	public:
		void get_data()
		{
		//	cout<<"Enter the base:";
		//	cin>>base;
			cout<<"Enter the length:";
			cin>>length;
		}
	virtual int  are_a()
	{
		cout<<"This is a function(In the base class) ";
	}
};
 class circle:public shape
{

	int are_a()
	{
		cout<<"The area of circle is:"<<(3.142*length*length)<<endl;
		
	}
};
class square:public shape
{

	int are_a()
	{
	cout<<"The area of square is:"<<(length*length)<<endl;
	}
	};
	
	
	
int main()
{
	int ch;
	int ch1;
circle c;
	square s;
	shape *ptr;
	do
	{
		cout<<"1.Area of circle\n 2.Area of square\n";
		cout<<"Enter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
			ptr=&c;
			ptr->get_data();
			ptr->are_a();
		
			break;
			case 2:
				ptr=&s;
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