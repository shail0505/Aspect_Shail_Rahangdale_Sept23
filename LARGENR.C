#include<stdio.h>
#include<conio.h>
void large();
void main()
{
	int e,d,f;
	clrscr();
	printf("Enter value:");
	scanf("%d %d %d",&e,&d,&f);
	large(e,d,f);
	getch();
}

void large(int a, int b, int c)
{
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
