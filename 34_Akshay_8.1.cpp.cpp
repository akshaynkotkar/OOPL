#include<iostream>
using namespace std;
void fun(int i)
{
	if(i==1510)
	{
		cout<<"Your are eligible for exam:";
	}
	else {
		throw(i);
	}
	
}
int main()
{
	int amount,a;
     cout<<"Enter the amount:";
	cin>>amount;
    try{
    	cout<<"Inside try block."<<endl;
    	
    	fun(amount);
	}
	catch(int k){
		cout<<"Please pay full Fees :"<<endl;
	}
	return 0;
}
