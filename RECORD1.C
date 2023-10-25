#include<stdio.h>
#include<conio.h>
struct stud
{
	char name[10];
	int age;
	char addr[25];
	char mob[11];
}s1;
void main()
{
	clrscr();
	printf("\nEnter name:");
	scanf("%s",s1.name);
	printf("\nEnter age:");
	scanf("%d",&s1.age);
	printf("\nEnter address:");
	scanf("%s",s1.addr);
	printf("\nEnter mobile no.:");
	scanf("%s",s1.mob);
	clrscr();
	printf("\nName:%s",s1.name);
	printf("\nAge:%d",s1.age);
	printf("\nAddress:%s",s1.addr);
	printf("\nMobile no.:%s",s1.mob);
	getch();
}



