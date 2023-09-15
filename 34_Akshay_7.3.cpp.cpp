//Write a c++ program for function template with single parameter
#include<iostream>
using namespace std;
 template <class T>
  T area(T n)
  {
    return 3.142*n*n;
  }
  template<class T1,class T2>
  void area(T1 l,T2 b)
  {
  	cout<<"The area of ractangle is:"<<(l*b)<<endl;
   } 
   int main()
   {
   	cout<<"The area of circle is:"<<area(5.5)<<endl;
   		cout<<"The area of circle is:"<<area(4)<<endl;
   	area(5,6);
   	area(5.5,6.6);
   	area(5.9,6);
   	return 0;
   }