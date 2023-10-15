
#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	vos(x);
	getch();
}
vos(int r)
{
	float PI=3.14,vos;
	clrscr();
	printf("\nEnter value for r:");
	scanf("%d",&r);
	vos=1.3*PI*r*r*r;
	printf("Volume of cube: %.2f",vos);
}