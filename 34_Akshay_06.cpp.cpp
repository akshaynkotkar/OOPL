#include<iostream>
#include<cstring>
using namespace std;
class fruits
{
	int Sr_no,price,quantity;
	string name_of_fruit;
	public:
		void insert_data();
		void display();
};
void fruits::insert_data()
{
	cout<<"Enter the name of fruit: ";
    cin>>name_of_fruit;
	cout<<"Enter the price of fruit:";
	cin>>price;
	cout<<"Enter the quantity of fruit in kg:";
	cin>>quantity;
}
void fruits::display()
{
	cout<<name_of_fruit<<"\t|"<<price<<"\t|"<<quantity<<"kg"<<"\t|"<<endl;
}
int main()
{
int n,i;
cout<<"Enter the number which you want to display the record:";
cin>>n;
 fruits *f =new fruits[n];  //dynamically memory is allocated.
 cout<<"\t\t\t Inserting the data"<<endl;
 for(i=1;i<=n;i++)
 {
 	f->insert_data();
 	f++;
 }
  cout<<"\t\t\t Displaying the data:"<<endl;
 
 for(i=1;i<=n;i++)
 {
 	
 	f--;
 }
cout<<"Name\t|Price\t|Quantity\t|"<<endl;
  for(i=1;i<=n;i++)
 {
 	f->display();
 	f++;
 }
  for(i=1;i<=n;i++)
 {
 	
 	f--;
 }
 int size=sizeof (*f);
 cout<<"The size of pointer is:  "<<size<<endl;
 delete []f;
 cout<<"\t\tDisplaying the data after delation of memory:"<<endl;
  for(i=1;i<=n;i++)
 {
 	f->display();
 	f++;
 }
 
return 0;
 
}
