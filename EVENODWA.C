#include<stdio.h>
#include<conio.h>
void evenodd();
void main()
{
	int n;
	clrscr();
	evenodd(n);
	getch();
}
void evenodd(int a)
{
	printf("Enter a number:");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("Even number");
	}
	else
	{
		printf("Odd number.");
	}
}
