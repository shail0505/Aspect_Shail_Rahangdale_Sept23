#include<stdio.h>
#include<conio.h>
int aos();
void main()
{
	int a,r;
	r=aos(a);
	printf("Area of square: %d",r);
	getch();
}
int aos(int s)
{
	int aos;
	clrscr();
	printf("\nEnter value for side:");
	scanf("%d",&s);
	aos=s*s;;
	return aos;
}
