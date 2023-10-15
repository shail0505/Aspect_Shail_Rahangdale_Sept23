#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\nEnter value of a:");
	scanf("%d",&a);
	if(a>=1 && a<=20)
	{
		printf("Range is 0-20");
	}
	else if(a>=21 && a<=50)
	{
		printf("Range is 21-50");
	}
	else if(a>=60 && a<=80)
	{
		printf("Range is 60-80");
	}
	else
	{
		printf("Error message.");
	}
	getch();
}