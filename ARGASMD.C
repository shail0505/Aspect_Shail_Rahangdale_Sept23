#include<stdio.h>
#include<conio.h>
void add(int n1,int n2);
void sub(int a,int b);
void mul(int x,int y);
void div(int q,int w);

void main()
{
	int a1,a2,b1,b2,c1,c2,d1,d2;
	clrscr();
	add(a1,a2);
	sub(b1,b2);
	mul(c1,c2);
	div(d1,d2);
	getch();
}
void add(int n1,int n2)
{
	int res;
	printf("\n\nEnter two numbers:");
	scanf("%d %d",&n1,&n2);
	res=n1+n2;
	printf("\n\nAddition is:%d",res);
}
void sub(int a,int b)
{


	int c;
	printf("\n\nEnter two numbers:");
	scanf("%d %d",&a,&b);
	c=a-b;
	printf("\n\nSubtraction is:%d",c);
}
void mul(int x,int y)
{

	int z;
	printf("\n\nEnter two numbers:");
	scanf("%d %d",&x,&y);
	z=x*y;
	printf("\n\nMultiplication is:%d",z);
}
void div(int q,int w)
{
	int div;
	printf("\n\nEnter two numbers:");
	scanf("%d %d",&q,&w);
	div=q/w;
	printf("\n\nDivision is:%d",div);
}



