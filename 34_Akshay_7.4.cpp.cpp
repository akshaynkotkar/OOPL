#include<iostream>
using namespace std;
template<class T,class T2,class T3>

		
		
		void display(T size,T2 arr[100],T3 key)
		{
			int flag=0;
			
			
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

int main()
		{
			int n;
			float key;
				float ar[n];
			cout<<"Enter the size of array:";
			cin>>n;
			
			for(int i=0;i<n;i++)
			{
				cin>>ar[i];
			}
			cout<<"Enter key:";
			cin>>key;
	
		
		display(n,ar,key);
		return 0;
		}
