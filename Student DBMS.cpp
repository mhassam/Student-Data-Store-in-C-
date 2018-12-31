#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class  student 
{
	private:
		float cgpa;
			static	int roll_no ;
		int size,length;
char fname[30],lname[40];    //: Roll number, First_Name, Last Name, E_mail, Telephone_Number, CGPA
char phone_no[15],email[70];

		public:
			student()
			{
				length=size=0;
			
			
			}
			/*
static  int rollNo()
{
	roll_no++;
			}			
	/*		student (int a, float b,char c[], char d[], char e[] ,char f[] )
			{roll_no=a;
		     	cgpa=b;
				strcpy(fname,c);
				strcpy(lname,d);
				strcpy(phone_no,e);
				strcpy(email,f);
			
			}*/
			void add ( float b,char c[], char d[], char e[] ,char f[] )
			{
			
			roll_no++;
				cin.ignore();
		     	cgpa=b;
				strcpy(fname,c);
				strcpy(lname,d);
				strcpy(phone_no,e);
				strcpy(email,f);
			length++;
			}
				int length_list()
			{
	return	length;
		}
				student copy (int roll_no, student &s2 )  //copy in sms
{ 
	student c;
	        c.roll_no==s2.roll_no;
		        c.cgpa=s2.cgpa;
				strcpy(c.fname,s2.fname);
				strcpy(c.lname,s2.lname);
				strcpy(c.phone_no,s2.phone_no);
				strcpy(c.email,s2.email);
			
				cout<<"information of the student is coppied\n";
					return c;
}


		void modify(int roll_no)			//modification in sms
			{
				student s;
				if(s.roll_no=roll_no)
				{
					cout<<"enter student updated CGPA"<<endl;
			    	cin>>cgpa;
						cout<<"enter student  updated first name"<<endl;
			     	cin>>fname;
			 		cout<<"enter student  updated last name"<<endl;
			     	cin>>lname;
			     	cin.ignore();
			 	  cout<<"entr student updated phone#"<<endl;
			 	  cin>>phone_no;
			 	  cout<<"enter student updated Email"<<endl;
			    	cin>>email;
			 	  cout<<"***AFTER MODIFICATION IN STUDENT INFORMATION***\n";
			 	  cout<<"student  roll# is "<<endl<<roll_no<<endl;
			 	  	cout<<" student updated  CGPA is "<<endl<<cgpa<<endl;
			 	cout<<" student updated  first name is "<<endl<<fname<<endl;
			 	cout<<" student updated  last name is "<<endl<<lname<<endl;
		 	cout<<" student updated  phone_no is"<<endl<<phone_no<<endl;
		 		cout<<" student updated  Email is "<<endl<<email<<endl;
			 	  
					}
					else
					{
						cout<<"\nenter valid roll no to update Student data\n";
					}
				
			}
			
				void search(int roll_no)					//search in sms
			{
				student s;
				int find=0;
				for(int j=0;j<size;j++)
				{
					if(roll_no==s.roll_no)
					{
						cout<<"search is completed\n";
						find=1;
						break;
					}
				}
				if(find==1)
				{
					cout<<"student  roll# is "<<endl<<roll_no<<endl;
			 	cout<<" student  first name is "<<endl<<fname<<endl;
			 	cout<<" student last name is "<<endl<<lname<<endl;
			 	cout<<" student CGPA is "<<endl<<cgpa<<endl;
			 	cout<<" student Email is "<<endl<<email<<endl;
		 	cout<<" student phone_no is"<<endl<<phone_no<<endl;	
				}
				else
				{
				
				cout<<"Element not found\n";
			}}
			
				void delete_info(int roll_no)	//delete function	
			{
				if(size==0)
				cout<<"Student managmnt system is still  empty\n";
				else
				{
					if(roll_no>=0&&roll_no<=size)
					{
						for(int j=roll_no;j<size;j++)
						{
							roll_no=roll_no+1;
						}
						size--;
		
					}
					cout<<"information is deleted successfully\n";
				}
			}
				 void display() //display function
			 {
			 	if(length==0) 		//underflow
			 {	
				cout<<"Student managmnt system is still  empty\n";
				}
				else
				{
				
				for(int j=0;j<=length;j++)
				{
				
			 	cout<<"student  roll# is "<<endl<<roll_no<<endl;
			 	cout<<" student  first name is "<<endl<<fname<<endl;
			 	cout<<" student last name is "<<endl<<lname<<endl;
			 	cout<<" student CGPA is "<<endl<<cgpa<<endl;
			 	cout<<" student Email is "<<endl<<email<<endl;
		 	cout<<" student phone_no is"<<endl<<phone_no<<endl;
		}
	}}			
		};
			int student::roll_no=0;
		 int main()
			 {
			 	student s1,s2;
			 //	student s1(1,3.2,"asma","iftikhar","132455","asma@"), s2(1,3.2,"aqsa","niyaz","56787","aaqsa@");	
			 	int ch;
			 	float cgpa;
		int rn ,size;
  char fname[30],lname[40];                                   //: Roll number, First_Name, Last Name, E_mail, Telephone_Number, CGPA
   char phone_no[15],email[70];		 
			 
			 	 cout<<"\n ***MAIN MENU*** \n";
			do {
			 cout<<"Press 1 to Add New student\n";
			 cout<<"Press 2 to Copy data from existing Student \n";
			 cout<<" Press 3 to Modify student Record \n";
			 cout<<"Press 4 to Search student Record \n";
			 cout<<" Press 5 to Delete Student Record \n";
			 cout<<"Press 6 to Display Account Information\n";
			 cout<<" Press 7 to Exit\n";
       cout<<"Enter your choice\n";
       cin>>ch;
switch(ch)
{
	case 1:
		
					cout<<"enter rollno\n";
					
					cout<<"enter student CGPA"<<endl;
			    	cin>>cgpa;
				 	cout<<"enter student first name"<<endl;
			     	cin>>fname;
			 		cout<<"enter student last name"<<endl;
			     	cin>>lname;
			 	  cout<<"entr student phone#"<<endl;
			 	  cin>>phone_no;
			 	  cout<<"enter student Email"<<endl;
			    	cin>>email;
				s1.add(cgpa,fname,lname,phone_no,email);
		break;
			case 2:
				cout<<"\nEnter roll no to copy information of student\n";
				cin>>rn;
				s1.copy(rn,s2);
		break;
			case 3:
				cout<<"\nEnter roll no to modify information of student\n";
				cin>>rn;
				s1.modify(rn);
			break;
				case 4:
					cout<<"\nEnter roll no to Search information of student\n";
				cin>>rn;
				s1.search(rn);
				case 5:
				cout<<"\nEnter roll no to delete information of student\n";
				cin>>rn;
				s1.delete_info(rn);
			break;
					case 6:
		s1.display();
			break;
				case 7:
					cout<<"Good Bye";
					break;
					default:
						cout<<"Wrong choice plz select proper choice\n";
						break;
		}
	}
	while(ch!=7);
	return 0;
			 
			 }
	
