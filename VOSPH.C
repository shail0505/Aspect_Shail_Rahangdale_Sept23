#include<stdio.h>
#include<conio.h>
void vos();
void main()
{
	vos();
	getch();
}
void vos()
{
	int r;
	float vos;
	clrscr();
	printf("\nEnter value for r:");
	scanf("%d",&r);
	vos=1.3*3.14*r*r*r;
	printf("Volume of cube: %.2f",vos);
}