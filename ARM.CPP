#include<iostream.h>
#include<conio.h>
class armstrong
{
	public:
	int r,sum,num,temp;
	void setdata();
	void calculate();
	void getdata();
};
    void armstrong:: setdata()
    {
	 cout<<"Number:";
	 cin>>num;
	 temp=num;
    }
    void armstrong:: calculate()
    {
	sum=0;
	while(num>0)
	{
	     r=num%10;
	     sum=sum+(r*r*r);
	     num=num/10;
	}
    }
    void armstrong:: getdata()
    {
	if(temp==sum)
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
	armstrong a;
	clrscr();
	a.setdata();
	a.calculate();
	a.getdata();
	getch();
}
