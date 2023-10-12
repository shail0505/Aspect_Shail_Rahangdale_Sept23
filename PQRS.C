#include<stdio.h>
#include<conio.h>
void main()
{
	int p,q,r,s;
	clrscr();
	printf("Enter integer value:");
	scanf("%d %d %d %d",&p,&q,&r,&s);
	if(q>r && s>p&& ((r+s) > (p+q)) && (r>0) && (s>0) && (p%2==0))
	{
		printf("Correct values");
	}
	else
	{
		printf("Wrong values");
	}
	getch();
}