#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	vocub(a,b,c);
	getch();
}
vocub(int l,int b,int h)
{
	int cuboid;
	clrscr();
	printf("\nEnter value for l,b and h:");
	scanf("%d %d %d",&l,&b,&h);
	cuboid=l*b*h;
	printf("Volume of cuboid: %d",cuboid);
}