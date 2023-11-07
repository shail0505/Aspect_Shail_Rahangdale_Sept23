#include<iostream.h>
#include<conio.h>
class one
{
	public:
	int a;
	void seta()
	{
		a=3;
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
		b=5;
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
		c=8;
	}
	void getc()
	{
		cout<<c<<endl;
	}
};
class four:public two,public three
{
	public: int d;
	void setd()
	{
		d=7;
	}
	void getd()
	{
		cout<<d<<endl;
	}
};
void main()
{
	clrscr();
	two ob;
	three ob2;
	four ob1;
	//two object
	ob.seta();
	ob.setb();
	ob.geta();
	ob.getb();
	//three object
	ob2.seta();
	ob2.setc();
	ob2.geta();
	ob2.getc();
	//four object
	ob1.setb();
	ob1.setc();
	ob1.setd();
	ob1.getb();
	ob1.getc();
	ob1.getd();
	getch();
}
