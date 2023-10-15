#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	aoc(a);
	getch();
}
aoc(int r)
{
	float aoc;
	clrscr();
	printf("\nEnter value for r :");
	scanf("%d",&r);
	aoc=3.14*r*r;;
	printf("Area of circle: %.2f",aoc);
}