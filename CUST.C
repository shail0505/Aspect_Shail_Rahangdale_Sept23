#include<stdio.h>
#include<conio.h>
struct cust
{
	int id;
	char name[10];
	char mob[11];
}c1;
void main()
{
	struct cust c1[5];
	int i;
	clrscr();
	for(i=0;i<=4;i++)
	{
		printf("\nEnter customer %d record:",i+1);
		printf("\nEnter id:");
		scanf("%d",&c1[i].id);
		printf("\nEnter name:");
		scanf("%s",c1[i].name);
		printf("\nEnter mobile no.:");
		scanf("%s",c1[i].mob);
	}
	for(i=0;i<=4;i++)
	{

		printf("\nDisplay customer %d record:",i+1);
		printf("\nId:%d",c1[i].id);
		printf("\nName:%s",c1[i].name);
		printf("\nMobile no.:%s",c1[i].mob);

		}
getch();
}



