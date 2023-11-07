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
		cout<<a<<endl;
	}
};

void main()
{
	clrscr();
	one ob1(2);
	ob1.get();
	getch();
}