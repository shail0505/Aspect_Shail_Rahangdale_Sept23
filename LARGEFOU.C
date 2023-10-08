#include<stdio.h>
#include<conio.h>

main()
{
int a,b,c,d;
clrscr();
printf("\nEnter first number:");
scanf("%d",&a);
printf("Enter second number:");
scanf("%d",&b);
printf("Enter third number:");
scanf("%d",&c);
printf("Enter fourth number:");
scanf("%d",&d);
if(a>b)
{
	if(a>c)
	{
		if(a>d)
		{
			printf("first is greater");
		}
		else
		{
			printf("fourth is greater");
		}
	}
	else
	{
		if(c>d)
		{
			printf("third is greater");
		}
		else
		{
			printf("fourth is greater");
		}
	}
}

else
{
		if(b>c)
		{
			if(b>d)
			{
				printf("second is greater");
			}
			else
			{
				printf("fourth is greater");
			}
		}
else
{
	if(d>c)
	{
		printf("fourth is greater");
	}
	else
	{
		printf("third is greater");
	}
}
}
getch();
}

