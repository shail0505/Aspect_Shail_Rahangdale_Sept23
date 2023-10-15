#include<stdio.h>
#include<conio.h>
void coc(float r)
{
	float coc;
	clrscr();
	printf("\nEnter value for radius:");
	scanf("%f",&r);
	coc=2*3.14*r;
	printf("Circumference of circle: %.2f",coc);
}
void main()
{
	float a;
	coc(a);
	getch();
}