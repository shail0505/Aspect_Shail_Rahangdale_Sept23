#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	char ch='A';
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",ch);
		}
		printf("\n");
		ch++;

	}
getch();
}