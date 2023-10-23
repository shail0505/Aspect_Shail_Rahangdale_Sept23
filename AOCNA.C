#include<stdio.h>
#include<conio.h>
float aoc();
void main()
{
	float b;
	clrscr();
	b=aoc();
	printf("Area of circle: %.2f",b);
	getch();
}
float aoc()
{
	int r;
	float aoc;
	printf("\nEnter value for r :");
	scanf("%d",&r);
	aoc=3.14*r*r;
	return aoc;
}