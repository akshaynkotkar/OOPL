#include<iostream>
#include<string>
using namespace std;
class fruits
{
	private:
	
	int prize1,prize2,prize3,prize4,prize5,quantity1,quantity2,quantity3,quantity4,quantity5;
	string fruit1,fruit2,fruit3,fruit4,fruit5;
	float avg;
	public:
	fruits()
	{
		fruit1="Apple";
		prize1=10;
		quantity1=4;
		fruit2="Grapes";
		prize2=30;
		quantity2=40;
		fruit3="Cherry";
		prize3=300;
		quantity3=2;
		fruit4="Mango";
		prize4=120;
		quantity4=4;
		fruit5="Gauva";
		prize5=100;
		quantity5=5;
		
		
	}
	/*void getdata()
	{
		cout<<"Enter the name of fruit:";
		cin>>fruit1;
		cout<<"Enter the prize of fruit:";
		cin>>prize1;
		cout<<"Enter the quantity of fruit:";
		cin>>quantity1;
		cout<<"Enter the name of fruit:";
		cin>>fruit2;
		cout<<"Enter the prize of fruit:";
		cin>>prize2;
		cout<<"Enter the quantity of fruit:";
		cin>>quantity2;
		cout<<"Enter the name of fruit:";
		cin>>fruit3;
		cout<<"Enter the prize of fruit:";
		cin>>prize3;
		cout<<"Enter the quantity of fruit:";
		cin>>quantity3;
		cout<<"Enter the name of fruit:";
		cin>>fruit4;
		cout<<"Enter the prize of fruit:";
		cin>>prize4;
		cout<<"Enter the quantity of fruit:";
		cin>>quantity4;
		cout<<"Enter the name of fruit:";
		cin>>fruit5;
		cout<<"Enter the prize of fruit:";
		cin>>prize5;
		cout<<"Enter the quantity of fruit:";
		cin>>quantity5;
		
	}*/
	void display()
	{
	   avg=(prize1+prize2+prize3+prize4+prize5)/5;
	   cout<<"Sr.No.\t| Name\t| Prize\t| Quantity"<<endl;
	   cout<<"1.\t|"<<fruit1<<"\t| "<<prize1<<"\t|"<<quantity1<<endl;
	   cout<<"2.\t|"<<fruit2<<"\t| "<<prize2<<"\t|"<<quantity2<<endl;
	   cout<<"3.\t|"<<fruit3<<"\t| "<<prize3<<"\t|"<<quantity3<<endl;
	   cout<<"4.\t|"<<fruit4<<"\t| "<<prize4<<"\t|"<<quantity4<<endl;
	   cout<<"5.\t|"<<fruit5<<"\t| "<<prize5<<"\t|"<<quantity5<<endl;
	   cout<<"\n\t Average= "<<avg<<endl;	               
	}	
	
		
};
int main()
{
	fruits s;
	s.display();
	return 0;
}