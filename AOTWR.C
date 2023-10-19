#include<stdio.h>
#include<conio.h>
int aot();
void main()
{
	float t;
	t=aot();
	printf("Area of triangle:%.2f",t);
	getch();
}
int aot()
{
	float a;
	int b,h;
	clrscr();
	printf("\nEnter value for b and h:");
	scanf("%d %d",&b,&h);
	a=0.5*b*h;
	return a;
}