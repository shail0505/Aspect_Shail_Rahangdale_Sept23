#include<stdio.h>
#include<conio.h>
void aos();
void main()
{
	aos();
	getch();
}
void aos()
{
	int s,aos;
	clrscr();
	printf("\nEnter value for side:");
	scanf("%d",&s);
	aos=s*s;;
	printf("Area of square: %d",aos);
}