#include<stdio.h>
#include<conio.h>
void aot(float b,float h)
{
	float tri;
	clrscr();
	printf("\nEnter value for b and h:");
	scanf("%f %f",&b,&h);
	tri=0.5*b*h;
	printf("Area of triangle: %.2f",tri);
}
void main()
{
	float a,b;
	aot(a,b);
	getch();
}