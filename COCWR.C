#include<stdio.h>
#include<conio.h>
int coc();
void main()
{
	float c,a;
	c=coc(a);
	printf("Circumference of circle: %.2f",c);
	getch();
}
int coc(int r)
{
	float coc;
	clrscr();
	printf("\nEnter value for radius:");
	scanf("%d",&r);
	coc=2*3.14*r;
	return coc;
}