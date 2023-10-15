#include<stdio.h>
#include<conio.h>
void aor();
void main()
{
	aor();
	getch();
}
void aor()
{
	int l,b,a;
	clrscr();
	printf("\nEnter value for l and b:");
	scanf("%d %d",&l,&b);
	a=l*b;
	printf("Area of rectangle:%d",a);
}