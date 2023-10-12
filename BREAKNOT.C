#include<stdio.h>
#include<conio.h>
void main()
{
	int amt,total;
	clrscr();
	printf("Input amount:");
	scanf("%d",&amt);
	total=amt/100;
	printf("\n%d notes of 100",total);
	total=amt/50;
	printf("\n%d notes of 50",total);
	total=amt/20;
	printf("\n%d notes of 20",total);
	total=amt/10;
	printf("\n%d notes of 10",total);
	getch();
}



