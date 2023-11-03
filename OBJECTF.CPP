#include<iostream.h>
#include<conio.h>
class add        /*class and class name*/
{
	public:int v1,v2,v3,v4;         /*two integer value*/
	void setdata();
	//void getdata();
	void sum(add obj2);
};
   void add::setdata()
   {
	cout<<"Enter a value:";
	cin>>v1>>v2;
   }
   void add::sum(add obj2)
	{
		v3=v1+obj2.v1;
		v4=v2+obj2.v2;
		cout<<v3<<endl<<v4<<endl;
	}

void main()
{
	clrscr();
	add obj1,obj2;
	obj1.setdata();
	obj2.setdata();
	obj1.sum(obj2);
	getch();
}
