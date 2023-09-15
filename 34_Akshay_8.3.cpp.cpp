#include<iostream>
using namespace std;
class err_or
{
	int marks;
	double mar_ks;
	char mar;
	public:
		err_or(int m,char c,double d)
		{
			marks=m;
			mar_ks=c;
			mar=d;
		}
		void display()
		{
			cout<<"Integer type exception caught:"<<marks<<endl;
				cout<<"Double type exception caught:"<<mar_ks<<endl;
				cout<<"Character type exception caught:"<<mar<<endl;
			
		}
};


int main()
{
   
    int mark1;
    char mark2;
    double mark3;
    cout<<"Enter marks integer type:";
    cin>>mark1;
     cout<<"Enter marks character  type:";
    cin>>mark2;
     cout<<"Enter marks double type:";
    cin>>mark3;
    
    try{
    	throw err_or(mark1,mark2,mark3);
    	
	}
	catch(err_or e)
	{
		e.display();
	}
    return 0;
}
