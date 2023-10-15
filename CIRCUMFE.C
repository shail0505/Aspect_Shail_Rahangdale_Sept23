#include<stdio.h>
#include<conio.h>
int coc();
void main()
{
	coc();
	getch();
}
int coc()
{
	int r;
	float PI=3.14,coc;
	clrscr();
	printf("\nEnter value for radius:");
	scanf("%d",&r);
	coc=2*PI*r;
	printf("Circumference of circle: %.2f",coc);
}