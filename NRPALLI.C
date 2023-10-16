#include<stdio.h>
#include<conio.h>
void pal();
void main()
{
	clrscr();
	pal();
	getch();
}

void pal()
{
	int n,d1,rev=0,temp;
	printf("Enter a number:");
	scanf("%d",&n);
	temp=n;
	for(;n>0;n=n/10)
	{
		d1=n%10;
		rev=(rev*10)+d1;
	}

	if(rev==temp)
	{
		printf("Pallindrome number.");
	}
	else
	{
		printf("Not a pallindrome number.");
	}
}