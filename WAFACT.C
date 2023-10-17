#include<stdio.h>
#include<conio.h>
void fact();
void main()
{
	int a;
	clrscr();
	fact(a);
	getch();
}

void fact(int n)
{
	int i,fact=1;
	printf("Enter fact number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		//printf("Factorial:",fact);
	}
	printf("Factorial:%d",fact);
}


