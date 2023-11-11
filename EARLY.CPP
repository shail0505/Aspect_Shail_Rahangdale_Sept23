#include<iostream.h>
#include<conio.h>
class one
{
	public:
	void dis()
	{
		cout<<"One called."<<endl;
	}
};
class two:public one
{
	public:
	void dis()
	{
		cout<<"Two called."<<endl;
	}
};
void main()
{
	clrscr();
	two ob;
	ob.one::dis();
	ob.dis();
	getch();
}