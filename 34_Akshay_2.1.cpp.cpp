#include<iostream>
using namespace std;

class sub;
//class mul;
//class div;
class add
{
	private:
	int value1;
	public:
	void get_data()
	{
		cout<<"Enter the First value: ";
		cin>>value1;
		
	}
	friend void difference(add,sub); //declare friend.
};
class sub
{
	private:
	int value2;
	public:
	void  get_data1()
	{
		cout<<"Enter the Second value: ";
		cin>>value2;
		
	}
	friend void difference(add,sub);
};
void difference(add obj,sub obj1)
{
	cout<<"\n\n";
	cout<<"The addition is:"<<obj.value1 + obj1.value2<<endl;
	cout<<"The substraction is:"<<obj.value1-obj1.value2<<endl;
    cout<<"The multiplication is:"<<obj.value1*obj1.value2<<endl;
    cout<<"The division is:"<<obj.value1+obj1.value2<<endl;
}
int main()
{
	add mul;
	sub div;
	mul.get_data();
	div.get_data1();
	difference(mul,div);
	return 0;
}