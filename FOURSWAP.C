#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d,e;
	clrscr();
	printf("\nEnter four number:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("\nEntered four number is:%d %d %d %d",a,b,c,d);
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
printf("\nAfter sorting sorted number is: %d %d %d %d",a,b,c,d);
getch();
}