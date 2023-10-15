#include<stdio.h>
#include<conio.h>
void vocu();
void main()
{
	vocu();
	getch();
}
vocu()
{
	int a,cube;
	clrscr();
	printf("\nEnter value for a:");
	scanf("%d",&a);
	cube=a*a*a;
	printf("Volume of cube: %d",cube);
}