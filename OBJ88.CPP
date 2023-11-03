/*Array of object employee class display record whose ph=88 last digit*/
#include<iostream.h>
#include<conio.h>
class emp
{
	public: int id;
	public: char name[20],ph_no[11];
	void setdata();
	void getdata();
};

   void emp:: setdata()
   {
	cout<<"Enter id:";
	cin>>id;
	cout<<"Enter name:";
	cin>>name;
	cout<<"Enter phone number:";
	cin>>ph_no;
   }
   void emp:: getdata()
   {
       if(ph_no[8]=='8' && ph_no[9]=='8')
       {
		cout<<"Id:"<<id<<endl;
		cout<<"Name:"<<name<<endl;
		cout<<"Phone number:"<<ph_no<<endl;
		getch();
	}
   }
void main()
{
	int i;
	clrscr();
	emp e[20];
	for(i=0;i<=2;i++)
	{
		e[i].setdata();
	}
	for(i=0;i<=2;i++)
	{
		e[i].getdata();
	}
	getch();
}

