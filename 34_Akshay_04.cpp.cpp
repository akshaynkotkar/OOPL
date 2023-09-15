#include<iostream>
using namespace std;
class basic_info
{
	protected:
		char name[40],cl_ass[10];
		int sr;
	public:
		void get_data1()
		{
			cout<<"Enter serial number:";
			cin>>sr;
			cout<<"Enter the name of student:";
			cin>>name;
			cout<<"Enter the class of student:";
			cin>>cl_ass;
		}
		void dis_play1()
		{
			cout<<"Serial number\tName\tClass\t"<<endl;
			cout<<"\n"<<sr<<"\t       "<<name<<"\t  "<<cl_ass<<"\t"<<endl;
		}
};
class roll_call
{
	protected :
		int roll_no,sem_no;
		public:
			void get_data2()
			{
				cout<<"Enter Student roll no. :";
				cin>>roll_no;
				cout<<"Enter semester number:";
				cin>>sem_no;
			}
			void dis_play2()
			{
				cout<<"Roll no.\t semster no.\t"<<endl;
				cout<<"\n"<<roll_no<<"\t       "<<sem_no<<"\t"<<endl;
			}
			
};
class final_details
{
	protected:
		
		char subject[20];
		public:
			void get_data3()
			{
				cout<<"Enter name of subject:";
				cin>>subject;
			//	cout<<"Enter the exam fee:";
			//	cin>>exam_fee;	
			}
		void dis_play3()
		{
			cout<<"Subject name\t"<<endl;
			cout<<"\n"<<subject<<"\t"<<endl;
		}
};
class eligible
{
protected :
	int fee;
	public:
		void get_data4()
		{
			cout<<"Enter fees you are paid:";
			cin>>fee;
		}
		void dis_play4()
		{
			if(fee<1510)
			cout<<"You are not eligible for appering exam."<<endl;
			else
			cout<<"You are not eligible for appering exam.";
		}
};
class exam_form:public basic_info,public roll_call,public final_details,public eligible
{
	protected :
		int num;
		char id[25];
		public:
			void get_data()
			{
				cout<<"Enter mobile number:";
				cin>>num;
				cout<<"Enter email_id:";
				cin>>id;
			}
			void dis_play()
			{
				cout<<"Mobile number\t Email_Id\t"<<endl;
				cout<<"\n"<<num<<"\t    "<<id<<"\t"<<endl;
				
			}
};
int main()
{
	exam_form e;
	e.get_data1();
		e.get_data2();
		e.get_data3();
		e.get_data();
		e.get_data4();
		e.dis_play1();
		e.dis_play2();
		e.dis_play3();
		e.dis_play();
	e.dis_play4();
	
	return 0;
	
	
}