#include<stdio.h>
#include<conio.h>

main()
{
int a,b,c;
clrscr();
printf("\nEnter first number:");
scanf("%d",&a);
printf("Enter second number:");
scanf("%d",&b);
printf("Enter third number:");
scanf("%d",&c);
if(a>b)
{
	if(a>c)
	{
		printf("a is greater");
	}
	else
	{
		printf("c is greater");
	}
}
	else
	{
		if(b>c)
		{
			printf("b is greater");
		}
		else
		{
			printf("c is greater");
		}
	 }

getch();
}
