#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c,d,e;
clrscr();
printf("\nEnter first number:");
scanf("%d",&a);
printf("Enter second number:");
scanf("%d",&b);
printf("Enter third number:");
scanf("%d",&c);
printf("Enter fourth number:");
scanf("%d",&d);
printf("Enter fifth number:");
scanf("%d",&e);
if(a>b)
{
	if(a>c)
	{
		if(a>d)
		{
			if(a>e)
			{
				printf("first is greater");
			}
			else
			{
				printf("fifth is greater");
			}
		}

		else
		{
			if(d>e)
			{
				printf("fourth is greater");
			}
			else
			{
				printf("fifth is greater");
			}
		}
	}
	else
	{
		if(c>d)
		{
			if(c>e)
			{
				printf("third is greater");
			}
			else
			{
				printf("fifth is greater");
			}
		}
		else
		{
			if(d>e)
			{
				printf("Fourth is greater");
			}
			else
			{
				printf("Fifth is greater");
			}
		}
	}

	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				if(b>e)
				{
					printf("second is greater");
				}
				else
				{
					printf("fifth is greater");
				}
			}
	else
	{
			if(d>e)
			{
				printf("fourth is greater");
			}

			else
			{
				printf("fifth is greater");
			}
	}
}
else
{
	if(c>d)
	{
		if(c>e)
		{
			printf("third is greater");
		}
		else
		{
			printf("fifth is greater");
		}
	}
else
{
	if(d>e)
	{
		printf("fourth is greater");
	}
	else
	{
		printf("fifth is greater");
	}
}
}
getch();
}
}


