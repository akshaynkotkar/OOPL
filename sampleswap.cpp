 #include<iostream>
 using namespace std;
 class add
 {
 	public:
 	int num1,num2;
 
 	
 	
 		inline int ok(int num1,int num2)
 		{
 			int temp=0;
 			temp=num1;
 			num1=num2;
 			num2=temp;
 			cout<<"The number is num1"<<endl;
 			cin>>num1;
 			cout<<"The number is num2"<<endl;
 			cin>>num2;
 			
 			//return(num1,num2);
		}
 };
 int main()
 {
 	//swap obj;
 	add obj;
 	int x,y;
 	cout<<"Enter First value:";
 	cin>>x;
 	cout<<"Enter Second value:";
 	cin>>y;

 	cout<<"The swapped numbers are:"<<obj.ok(x,y)<<endl;
 	return 0;
 }