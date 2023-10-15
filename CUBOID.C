#include<stdio.h>
#include<conio.h>
void vocub();
void main()
{
	vocub();
	getch();
}
vocub()
{
	int l,b,h,cuboid;
	clrscr();
	printf("\nEnter value for l,b and h:");
	scanf("%d %d %d",&l,&b,&h);
	cuboid=l*b*h;
	printf("Volume of cuboid: %d",cuboid);
}