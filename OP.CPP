#include<iostream.h>
#include<conio.h>
class stud
{
	public:
	int a;
	void seta(int x)
	{
		a=x;
	}
	void geta()
	{
		cout<<a+1;
	}
	void operator ++()
	{
		a=a+1;
	}
};
void main()
{
	clrscr();
	stud ob;
	ob.seta(2);
	ob.geta();
	++ob;
	getch();
}
