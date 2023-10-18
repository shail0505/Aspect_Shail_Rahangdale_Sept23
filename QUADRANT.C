#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("Input the coordinate:");
	printf("\na: ");
	scanf("%d",&a);
	printf("\nb: ");
	scanf("%d",&b);
	if(a>0 && b>0)
	{
		printf("Qudrant1(++)\n");
	}
	else if(a>0 && b<0)
	{
		printf("Qudrant2(+-)\n");
	}
	else if(a<0 && b<0)
	{
		printf("Qudrant3(--)\n");
	}
	else if(a<0 && b>0)
	{
		printf("Qudrant4(-+)\n");
	}
getch();
}