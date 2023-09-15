#include<iostream>
using namespace std;
template<class T,class T3>
class search
{
		
		T3 key;
	T arr[100];
	 int size;
	int flag=0;
	
	public :

		void getdata()
		{
			cout<<"Enter Array size:";
			cin>>size;
			cout<<"Enter array elements:";
			for(int i=0;i<size;i++)
			{
				cin>>arr[i];
			}
			cout<<"Enter search key:";
			cin>>key;
		}
		
	
		
		void display()
		{
			
			for(int i=0;i<size;i++)
		{
			 if(arr[i]==key)
			 {
			 	flag=1;
			 	break;
			 	
			 }
	
		}
		if(flag==1)
		cout<<"Element Found"<<endl;
		else
		cout<<"Element not found"<<endl;
			 
		}
				
};
int main()
		{
			search<int,int> a;
			a.getdata();
	a.display();
		return 0;
		}
