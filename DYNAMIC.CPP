#include<iostream.h>
#include<conio.h>
#include<string.h>
class one
{
	public:
	char *name;
	int l;
	int a;
	one()
	{
		l=0;
		name=new char[1];
	}
	one(char n1[])
	{
		name=new char [strlen(n1)+1];
		strcpy(name,n1);
	}
	void get()
	{
		cout<<name<<endl;
	}
	one(one &ob1)
	{
		a=ob1.a;
	}
};
void main()
{
	clrscr();
	one ob2,ob3;
	one ob1("Tanu");
	ob1.get();
	ob2.get();
	ob3.get();
	getch();
}