#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter  two values:");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		c=a;
		a=b;
		b=c;
	}
	if((b%a)==0)
	{
		printf("Multiplied.");
	}
	else
	{
		printf("Not multiplied.");
	}

getch();
}