#include<stdio.h>
#include<conio.h>
void main()
{
	int d,l;
	float avg;
	clrscr();
	printf("Enter distance:");
	scanf("%d",&d);
	printf("Enter fuel:");
	scanf("%d",&l);
	avg=d/l;
	printf("\nAverage:%.2f",avg);
	getch();
}
