#include<iostream.h>
#include<conio.h>
class one
{
	public:
	int a;
	one(int x)
	{
		a=x;
	}
	void get()
	{
		cout<<a;
	}
	one(one &ob1)
	{
		a=ob1.a;
	}
};
void main()
{
	clrscr();
	one ob1(3);
	one ob2=one(ob1);
	one ob3=ob2;
	ob1.get();
	ob2.get();
	ob3.get();
	getch();
}