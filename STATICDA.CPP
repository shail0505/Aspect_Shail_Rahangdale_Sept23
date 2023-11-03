/*Static Data Member*/
#include<iostream.h>
#include<conio.h>
class one
{
	public: static int a;
	public: int b;
	void setdata();
	void getdata();
};
void one::setdata()
{
	a++;
}
void one::getdata()
{
	cout<<a<<endl;
}
int one::a;
void main()
{
	one o1,o2,o3;
	o1.getdata();
	o2.getdata();
	o3.getdata();
	o1.setdata();
	o1.getdata();
	o2.getdata();
	o3.getdata();
	getch();
}
