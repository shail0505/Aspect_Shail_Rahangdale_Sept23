#include<stdio.h>
#include<conio.h>
void main()
{
	float i1,i2,p1,p2,avg;
	clrscr();
	printf("Enter item1 and item 2:");
	scanf("%f %f",&i1,&i2);
	printf("Enter quantity:");
	scanf("%f %f",&p1,&p2);
	avg=((i1*p1)+(i2*p2))/(p1+p2);
	printf("Average of item: %.2f",avg);
	getch();
}
