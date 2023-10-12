#include<stdio.h>
#include<conio.h>
void main()
{
	int day,year,mon,d;
	clrscr();
	printf("Enter day:");
	scanf("%d",&day);
	year=day/365;
	day=day-(365*year);
	mon=day/30;
	d=day-(mon*30);
	printf("year month day: %d %d %d",year,mon,d);
	getch();
}