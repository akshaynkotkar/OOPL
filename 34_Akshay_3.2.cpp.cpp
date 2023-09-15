#include<iostream>
using namespace std;
class complex_number
{
	float real_part,imaginary_part;
	public:
		complex_number()
		{
			real_part=0;
			imaginary_part=0;
			
		}
		void getdata()
		{
			cout<<"Enter the real part:"<<endl;
			cin>>real_part;
		    cout<<"Enter the imaginary part:"<<endl;
			cin>>imaginary_part;
		}
		void display()
		{
		
			cout<<real_part<<"+"<<imaginary_part<<"i";
			cout<<endl;
		}
		
		complex_number operator -(complex_number samp)
		{
			complex_number obj;
			obj.real_part=real_part-samp.real_part;
			obj.imaginary_part=imaginary_part-samp.imaginary_part;
			return obj;
			
		}
		friend complex_number operator +(complex_number samp1,complex_number samp2)
		{
			complex_number k;
			k.real_part=samp1.real_part+samp2.real_part;
			k.imaginary_part=samp1.real_part+samp2.imaginary_part;
			return k;
		}
};
int main()
{
	complex_number obj1,obj2,obj;
	obj1.getdata();
	obj2.getdata();
	obj1.display();
	obj2.display();
	cout<<"\nThe addition is:";
	obj=obj1+obj2;
	obj.display();
	cout<<"\nThe substraction is:";
	obj=obj1-obj2;
	obj.display();
	return 0;
}