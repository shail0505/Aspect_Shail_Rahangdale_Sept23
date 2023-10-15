#include<stdio.h>
#include<conio.h>
int vocub();
void main()
{
	vocub();
	getch();
}
int vocub()
{
	int l,b,h,cuboid;
	clrscr();
	printf("\nEnter value for l,b and h:");
	scanf("%d %d %d",&l,&b,&h);
	cuboid=l*b*h;
	printf("Volume of cuboid: %d",cuboid);
}