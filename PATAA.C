#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	char ch;
	ch ='A','a';
	clrscr();
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==1)
			{

				printf(" %d",j);
			}
		}
		printf("\n");
	}
getch();
}