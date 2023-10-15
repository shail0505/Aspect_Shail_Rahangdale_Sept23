#include<stdio.h>
#include<conio.h>
void add();
void sub();
void mul();
void div();

void main()
{
	clrscr();
	add();
	sub();
	mul();
	div();
	getch();
}
void add()
{
	int n1,n2,res;
	printf("\n\nEnter two numbers:");
	scanf("%d %d",&n1,&n2);
	res=n1+n2;
	printf("\n\nAddition is:%d",res);
}
void sub()
{


	int a,b,c;
	printf("\n\nEnter two numbers:");
	scanf("%d %d",&a,&b);
	c=a-b;
	printf("\n\nSubtraction is:%d",c);
}
void mul()
{

	int x,y,z;
	printf("\n\nEnter two numbers:");
	scanf("%d %d",&x,&y);
	z=x*y;
	printf("\n\nMultiplication is:%d",z);
}
void div()
{
	int q,w,div;
	printf("\n\nEnter two numbers:");
	scanf("%d %d",&q,&w);
	div=q/w;
	printf("\n\nDivision is:%d",div);
}



