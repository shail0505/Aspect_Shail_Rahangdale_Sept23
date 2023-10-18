#include<stdio.h>
#include<conio.h>
int fact();
void main()
{
	int n,r;
	clrscr();
	r=fact();
	printf("Factorial:%d",r);
	getch();
}

int fact()
{
	int i,n,fact=1;
	printf("Enter fact number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
		return fact;
}


