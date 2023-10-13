#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=69;i>=65;i--)
	{
		for(j=65;j<=69;j++)
		{
			printf(" %c",i);
		}
		printf("\n");
	}
getch();
}