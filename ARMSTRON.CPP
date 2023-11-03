#include<iostream.h>
#include<conio.h>
class arm
{
	public:
	int n,r,c,sum;
	void setdata(int num);
	void calculate();
	void getdata();
};
    void arm:: setdata(int num)
    {
	  n=num;
	  c=n;
    }
    void arm:: calculate()
    {
	sum=0;
	while(n>0)
	{
	     r=n%10;
	     sum=sum+(r*r*r);
	     n=n/10;
	}
    }
    void arm:: getdata()
    {
	if(c==sum)
	{
		cout<<"Armstrong.";
	}
	else
	{
		cout<<"Not armstrong.";
	}
    }
void main()
{
	arm a;
	clrscr();
	a.setdata(153);
	a.calculate();
	a.getdata();
	getch();
}
