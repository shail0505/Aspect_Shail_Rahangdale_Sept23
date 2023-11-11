#include<iostream.h>
#include<conio.h>
class one
{
	public:
	void dis()
	{
		cout<<"One called."<<endl;
	}
};
void main()
{
	clrscr();
	one ob,*opt;
	cout<<"opt points to one."<<endl;
	opt=&ob;
	opt->dis();
	getch();
}