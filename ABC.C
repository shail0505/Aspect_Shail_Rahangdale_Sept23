#include<stdio.h>
#include<conio.h>
void main()
{
	char a,b,j;
	clrscr();
	for(a=65;a<=67;a++)
	{
		for(b=67;b>=a;b--)
		{
			printf(" ");
		}

		for(j=65;j<=a;j++)
		{
			printf("%c",a);
		}
	printf("\n");
	}
getch();
}