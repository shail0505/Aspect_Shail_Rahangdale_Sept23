#include<stdio.h>
#include<conio.h>
int aoc();
void main()
{
	aoc();
	getch();
}
int aoc()
{
	int r;
	float aoc;
	clrscr();
	printf("\nEnter value for r :");
	scanf("%d",&r);
	aoc=3.14*r*r;;
	printf("Area of circle: %.2f",aoc);
}