#include<stdio.h>
#include<conio.h>
struct emp
{
	int id;
	char name[10];
	char mob[11];
}e;
void main()
{
	struct emp e[5];
	int i;
	clrscr();
	for(i=0;i<=4;i++)
	{
		printf("\nEnter customer %d record:",i+1);

		printf("\nEnter id:");
		scanf("%d",&e[i].id);
		printf("\nEnter name:");
		scanf("%s",e[i].name);
		printf("\nEnter mobile no.:");
		scanf("%s",e[i].mob);
	}

	for(i=0;i<=4;i++)
	{

		if((e[i].mob[8]=='8')&&(e[i].mob[9]=='8'))
		{
			//clrscr();
			printf("\nDisplay customer %d record:",i+1);
			printf("\nId:%d",e[i].id);
			printf("\nName:%s",e[i].name);
			printf("\nMobile no.:%s",e[i].mob);
		}


	}

getch();
}
