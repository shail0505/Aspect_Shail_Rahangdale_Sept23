#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d,e,f;
	clrscr();
	printf("\nEnter five number:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	printf("\nEntered four number is:%d %d %d %d %d",a,b,c,d,e);
	if(a>b)
	{
		e=a;
		a=b;
		b=e;
	}
	if(b>c)
	{
		e=b;
		b=c;
		c=e;
	}
	if(c>d)
	{
		e=c;
		c=d;
		c=e;
	}
	if(d>e)
	{
		f=d;
		d=e;
		e=f;
	}
	if(a>b)
	{
		e=a;
		a=b;
		b=e;
	}
	if(b>c)
	{
		e=b;
		b=c;
		c=e;
	}
	if(c>d)
	{
		e=c;
		c=d;
		c=e;
	}
	if(d>e)
	{
		f=d;
		d=e;
		e=f;
	}
printf("\nAfter sorting sorted number is: %d %d %d %d %d",a,b,c,d,e);
getch();
}