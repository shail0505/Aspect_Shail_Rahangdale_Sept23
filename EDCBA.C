#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=68;i>=65;i--)
	{
		for(j=69;j>=65;j--)
		{
			printf(" %c",j);
		}
		printf("\n");
	}
getch();
}