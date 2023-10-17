#include<stdio.h>
#include<conio.h>
void fact();
void main()
{
	clrscr();
	fact();
	getch();
}

void fact()
{
	int i,n,fact=1;
	printf("Enter fact number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		//printf("Factorial:",fact);
	}
	printf("Factorial:%d",fact);
}


