#include<stdio.h>
#include<conio.h>
void main()
{
	float x,y,z,p;
	clrscr();
	printf("Enter three floating points:");
	scanf("%f %f %f",&x,&y,&z);
	if(x<(y+z) && y<(x+z) && z<(x+y))
	{
		p=x+y+z;
		printf("Perimeter of triangle: %.2f",p);
	}
	else
	{
		printf("Triangle not possible..");
	}
getch();
}