 #include<iostream>
 using namespace std;
 class add
 {
 	public:
 	int length,breadth;
 
 	
 	
 		inline int area_rectangle(int length,int breadth)
 		{
 			return(length*breadth);
		}
 };
 int main()
 {
 	//swap obj;
 	add obj;
 	int x,y;
 	cout<<"Enter Length:";
 	cin>>x;
 	cout<<"Enter breadth:";
 	cin>>y;

 	cout<<"The Area of rectangle is:"<<obj.area_rectangle(x,y)<<endl;
 	return 0;
 }