#include<stdio.h>
#include<conio.h>
int evenodd();
void main()
{
	int n;
	char r;
	clrscr();
	r=evenodd(n);
	if(r=='e')
	{
	  printf("Even number");
	}
	else
	{
	  printf("Odd number");
	}
	getch();
}
int evenodd(int a)
{
	printf("Enter a number:");
	scanf("%d",&a);
	if(a%2==0)
	{
		return 'e';

	}
	else
	{
		return 'o';

	}
}
