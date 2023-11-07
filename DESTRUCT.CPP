#include<iostream.h>
#include<conio.h>
class one
{
	public:
	void get()
	{
	    cout<<"Constructor called."<<endl;
	}
	~one()
	{
		cout<<"Destructor called."<<endl;
	}
};
void main()
{
	clrscr();
	one ob;
	ob.get();
	getch();
}
