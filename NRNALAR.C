#include<stdio.h>
#include<conio.h>
void large();
void main()
{
	clrscr();
	large();
	getch();
}

void large()
{
	int a,b,c;
	printf("Enter value:");
	scanf("%d %d %d",&a,&b,&c);
	if((a>b)&&(a>c))
	{
		printf("First largest");
	}
	else if(b>c)
	{
		printf("Second Largest");
	}
	else
	{
		printf("Third largest");
	}
}
