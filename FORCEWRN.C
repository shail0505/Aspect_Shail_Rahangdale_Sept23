#include<stdio.h>
#include<conio.h>
int force();
void main()
{
	int r,a,b;
	r=force(a,b);
	printf("Force: %d",r);
	getch();
}
int force()
{
	int m,a,f;
	clrscr();
	printf("\nEnter value for mass and acc:");
	scanf("%d %d",&m,&a);
	f=m*a;
	return f;
}