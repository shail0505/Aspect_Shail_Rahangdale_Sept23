#include<iostream.h>
#include<conio.h>
class one
{
	public:
	int a;
	void seta()
	{
		a=2;
	}
	void geta()
	{
	    cout<<a<<endl;
	}
};
class two:public one
{
	public: int b;
	void setb()
	{
		b=4;
	}
	void getb()
	{
		cout<<b<<endl;
	}
};
class three:public one
{
	public: int c;
	void setc()
	{
		c=5;
	}
	void getc()
	{
		cout<<c<<endl;
	}
};
void main()
{
	clrscr();
	two t;
	three ob;
	t.seta();
	t.setb();
	t.geta();
	t.getb();
	ob.seta();
	ob.setc();
	ob.geta();
	ob.getc();
	getch();
}
