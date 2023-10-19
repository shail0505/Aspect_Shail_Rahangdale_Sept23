#include<stdio.h>
#include<conio.h>
int aot();
void main()
{
	float t,a;
	t=aot(a);
	printf("Area of triangle:%.2f",t);
	getch();
}
int aot(int b,int h)
{
	float tri;
	clrscr();
	printf("\nEnter value for b and h:");
	scanf("%d %d",&b,&h);
	tri=0.5*b*h;
	return tri;
}