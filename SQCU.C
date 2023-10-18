#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,j=1,x=0;
	clrscr();
	printf("Enter line number:");;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		printf("\n %d %d",i*i,i*i*i);
	}

getch();
}