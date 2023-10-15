#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	force();
	getch();
}
force(int m,int a,int f)
{
	clrscr();
	printf("\nEnter value for mass and acc:");
	scanf("%d %d",&m,&a);
	f=m*a;
	printf("Force: %d",f);
}