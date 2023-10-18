#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,div;
	clrscr();
	printf("Enter number to divide:");
	scanf("%d %d",&a,&b);
	if(a!=0)
	{
		if((a%b)==0)
		{
				div=a/b;
				printf("Division:%d",div);
		}

		else
		{
				printf("Not possible");
		}
	}
getch();
}