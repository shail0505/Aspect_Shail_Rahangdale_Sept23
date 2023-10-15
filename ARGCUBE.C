#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	vocu(x);
	getch();
}
vocu(int a)
{
	int cube;
	clrscr();
	printf("\nEnter value for a:");
	scanf("%d",&a);
	cube=a*a*a;
	printf("Volume of cube: %d",cube);
}