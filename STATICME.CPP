/*Static Member Function*/
#include<iostream.h>
#include<conio.h>
class one
{
	public: static int a;
	public: int b;
   static void setdata()
   {
	a++;
   }
   void getdata()
   {
	cout<<a<<endl;
   }
};
int one::a;
void main()
{
	clrscr();
	one o1,o2,o3;
	o1.getdata();
	one::setdata();
	o1.getdata();
	one::setdata();
	o2.getdata();
	one::setdata();
	o3.getdata();
	one::setdata();
	getch();
}