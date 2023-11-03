#include<iostream.h>
#include<conio.h>
class pal
{
	public:
	int r,rev,num,temp;
	void setdata();
	void calculate();
	void getdata();
};
    void pal:: setdata()
    {
	 cout<<"Number:";
	 cin>>num;
	 temp=num;
    }
    void pal:: calculate()
    {
	rev=0;
	while(num>0)
	{
	     r=num%10;
	     rev=(rev*10)+r;
	     num=num/10;
	}
    }
    void pal:: getdata()
    {
	if(temp==rev)
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
	p.setdata();
	p.calculate();
	p.getdata();
	getch();
}
