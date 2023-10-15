#include<stdio.h>
#include<conio.h>
int aot();
int main()
{
	aot();
	getch();
}
int aot()
{
	float b,h,aot;
	clrscr();
	printf("\nEnter value for b and h:");
	scanf("%f %f",&b,&h);
	aot=0.5*b*h;
	printf("Area of triangle: %.2f",aot);
}