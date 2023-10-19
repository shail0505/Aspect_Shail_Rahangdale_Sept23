#include<stdio.h>
#include<conio.h>
int aor();
void main()
{
	int r;
	r=aor();
	printf("Area of rectangle:%d",r);
	getch();
}
int aor()
{
	int l,b,a;
	clrscr();
	printf("\nEnter value for l and b:");
	scanf("%d %d",&l,&b);
	a=l*b;
	return a;
}