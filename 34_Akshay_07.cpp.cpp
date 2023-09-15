//write a c++ program for selection sort using class template and single parameter
#include <iostream>  
using namespace std;  
template<class T,int size>  
class selec  
{  
     
    T arr[size];
	
    public: 
    
    void insert()  
    {  
        int k =1;  
        for (int i=0;i<size;i++)  
        {  
            cin>>arr[i];   
              
        }  
    }  
      
    void display()  
    {  
        for(int i=0;i<size-1;i++)  
        {  
        for(int j=i+1;j<size;j++)
        {
        	if(arr[j]<arr[i])
        	{
        		T temp=arr[j];
        		arr[j]=arr[i];
        		arr[i]=temp;
			}
		}	
    } 
	     for(int i=0;i<size;i++)
		{
			cout<<arr[i]<<"  ";
        }
	}
};  
int main()  
{  
 

    selec<int,5> s1;
	
    s1.insert();  
    s1.display();  
    return 0;  
}  