#include<iostream>
using namespace std;
void fun1(int marks)
{
	try{
		if(marks==40)
		throw marks;
		
		
		else if(marks==30)
			throw 'c';
		else if(marks==90)
			throw 8.5;
	
	}
	catch(int i){
		//cout<<"Caught Integer:"<<endl;
		cout<<"Pass"<<endl;
	}
		catch(char c){
	//	cout<<"Caught character  :"<<endl;
		cout<<"Fail"<<endl;
	}
		catch(double d){
	//	cout<<"cuaght Double:"<<endl;
		cout<<"Pass with 8.5 pointer"<<endl;
	}
	catch(...)
	{
		cout<<"All exception catch"<<endl;
	}

}	 

int main()
{
    int a;
   // cout<<"Enter the marks: ";
   // cin>>a;
   // fun1(a);
    fun1(40);
    fun1(30);
    fun1(90);
    return 0;
}
