#include<stdio.h>
#include<conio.h>
void main()
{
	int num,c;
	clrscr();
	printf("Enter integer number:");
	scanf("%d",&num);
	printf("\nSquare of each even values from 1 to a %d:\n",num);
	for(c=2;c<=num;c++)
	{
		if((c%2)==0)
		{

			printf("%d^2=%d\n", c, c*c);
		}
	}
getch();
}