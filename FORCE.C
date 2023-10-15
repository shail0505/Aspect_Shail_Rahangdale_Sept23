#include<stdio.h>
#include<conio.h>
void force();
void main()
{
	force();
	getch();
}
void force()
{
	int m,a,f;
	clrscr();
	printf("\nEnter value for mass and acc:");
	scanf("%d %d",&m,&a);
	f=m*a;
	printf("Force: %d",f);
}