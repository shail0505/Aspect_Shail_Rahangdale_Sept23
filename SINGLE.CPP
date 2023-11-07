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
void main()
{
	two ob;
	clrscr();
	ob.seta();
	ob.setb();
	ob.geta();
	ob.getb();
	getch();
}
