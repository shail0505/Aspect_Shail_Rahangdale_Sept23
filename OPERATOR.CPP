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
		cout<<-a;
	}
	void operator -()
	{
		a=-a;
	}
};
void main()
{
	clrscr();
	stud ob;
	ob.seta(2);
	ob.geta();
	-ob;
	getch();
}
