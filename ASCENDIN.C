#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("Enter a number:");
	scanf("%d %d",&x,&y);
	if(x<y)
	{
		printf("Ascending order.\n");
	}
	else
	{
		printf("Desending order.\n");
	}
getch();
}