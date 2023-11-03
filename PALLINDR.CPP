#include<iostream.h>
#include<conio.h>
class pal
{
	public:
	int n,r,c,rev;
	void setdata(int num);
	void calculate();
	void getdata();
};
    void pal:: setdata(int num)
    {
	  n=num;
	  c=n;
    }
    void pal:: calculate()
    {
	rev=0;
	while(n>0)
	{
	     r=n%10;
	     rev=(rev*10)+r;
	     n=n/10;
	}
    }
    void pal:: getdata()
    {
	if(c==rev)
	{
		cout<<"Pallindrome.";
	}
	else
	{
		cout<<"Not pallindrome.";
	}
    }
void main()
{
	pal p;
	clrscr();
	p.setdata(121);
	p.calculate();
	p.getdata();
	getch();
}
