#include<iostream>
using namespace std;
int main()
{
	float f;
	cout<<"Enter value of f";
	cin>>f;
	int flag =0;
	if(f==0.1)
	{
		flag=1;
		break;
	}
	
	if(flag==1)
	{
		cout<<"True";
	}
	else 
	{
		cout<<"False";
	}
	return 0;
	
}