#include<iostream.h>
#include<conio.h>
class stud
{
	public: int id,i;
	public: char name[20];
	void setdata();
	void getdata();
};

   void stud:: setdata()
   {
	cout<<"Enter id:";
	cin>>id;
	cout<<"Enter name:";
	cin>>name;
   }
   void stud:: getdata()
   {
       cout<<"\n"<<id;
       cout<<"\n"<<name;
   }
void main()
{
	int i;
	clrscr();
	stud s[20];
	for(i=0;i<=1;i++)
	{
		s[i].setdata();
	}
	for(i=0;i<=1;i++)
	{
		s[i].getdata();
	}
	getch();
}

