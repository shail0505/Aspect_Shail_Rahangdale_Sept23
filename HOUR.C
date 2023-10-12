#include<stdio.h>
#include<conio.h>
void main()
{
	int sec,hr,min,seco;
	clrscr();
	printf("Enter value for sec:");
	scanf("%d",&sec);
	hr=(sec/3600);
	min=(sec-( 3600*hr))/60;
	seco=(sec-(3600*hr)-(min*60));
	printf("\nHour minute second: %d %d %d",hr,min,seco);
	getch();
}