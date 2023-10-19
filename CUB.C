#include<stdio.h>
#include<conio.h>
int vocub();
void main()
{
	int a,b,h,c;
	c=vocub(a,b,h);
	printf("Volume of cuboid: %d",c);
	getch();
}
int vocub()
{
	int l,b,h,cuboid;
	clrscr();
	printf("\nEnter value for l,b and h:");
	scanf("%d %d %d",&l,&b,&h);
	cuboid=l*b*h;
	return cuboid;
}