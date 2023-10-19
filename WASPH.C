#include<stdio.h>
#include<conio.h>
int vos();
void main()
{
	float f,a;
	f=vos();
	printf("Volume of cube: %.2f",vos);
	getch();
}
int vos(int r)
{
	float vos;
	clrscr();
	printf("\nEnter value for r:");
	scanf("%d",&r);
	vos=1.3*3.14*r*r*r;
	return vos;
}