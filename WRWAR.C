#include<stdio.h>
#include<conio.h>
int fact();
void main()
{
	int a,r;
	clrscr();
	r=fact(a);
	printf("Factorial:%d",r);
	getch();
}

int fact(int n)
{
	int i,fact=1;
	printf("Enter fact number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
		return fact;
}


