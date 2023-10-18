#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,j,b,l;
	clrscr();
	printf("Enter two line number:");;
	scanf("%d %d",&a,&b);
	for(i=1,l=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			printf(" %d",l);
			l++;
		}
		printf("\n");
	}

getch();
}