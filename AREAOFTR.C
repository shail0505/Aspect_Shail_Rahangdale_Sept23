#include<stdio.h>
#include<conio.h>
void aot();
void main()
{
	aot();
	getch();
}
void aot()
{
	float b,h,aot;
	clrscr();
	printf("\nEnter value for b and h:");
	scanf("%f %f",&b,&h);
	aot=0.5*b*h;
	printf("Area of triangle: %.2f",aot);
}