#include<iostream.h>										    #include<iostream.h>
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
class two
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
class three:public one,public two
{
	public: int c;
	void setc()
	{
		c=8;
	}
	void getc()
	{
		cout<<c<<endl;
	}
};
void main()
{
	clrscr();
	three ob;
	ob.seta();
	ob.setb();
	ob.setc();
	ob.geta();
	ob.getb();
	ob.getc();
	getch();
}
