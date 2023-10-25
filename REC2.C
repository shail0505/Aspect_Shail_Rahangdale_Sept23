#include<stdio.h>
#include<conio.h>
struct cust
{
	int id;
	char name[10];
	char mob[11];
}c1,c2;
void main()
{
	clrscr();
	printf("\nEnter id:");
	scanf("%d",&c1.id);
	printf("\nEnter name:");
	scanf("%s",c1.name);
	printf("\nEnter mobile no.:");
	scanf("%s",c1.mob);
	printf("\nEnter id:");
	scanf("%d",&c2.id);
	printf("\nEnter name:");
	scanf("%s",c2.name);
	printf("\nEnter mobile no.:");
	scanf("%s",c2.mob);

	clrscr();
	printf("\nId:%d",c1.id);
	printf("\nName:%s",c1.name);
	printf("\nMobile no.:%s",c1.mob);

	printf("\nId:%d",c2.id);
	printf("\nName:%s",c2.name);
	printf("\nMobile no.:%s",c2.mob);
	getch();
}



