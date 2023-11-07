#include<iostream.h>
#include<conio.h>
class one
{
	public:
	int a;
	one()
	{
		cout<<"Enter a:"<<endl;
		cin>>a;
	}
	void get()
	{
		cout<<a<<endl;
	}
};
void main()
{
	clrscr();
	one ob1,ob2,ob3;
	ob1.get();
	ob2.get();
	ob3.get();
	getch();
}