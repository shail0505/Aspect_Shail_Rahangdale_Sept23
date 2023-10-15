#include<stdio.h>
#include<conio.h>
int large(int a, int b, int c)
{
	if((a>b)&&(a>c))
	{
		return a;
	}
	else if(b>c)
	{
		return b;
	}
	else
	{
		return c;
	}
}
void main()
{
	int e,d,f,t;
	clrscr();
	printf("Enter value:");
	scanf("%d %d %d",&e,&d,&f);
	t=large(e,d,f);
	printf("Largest no.: %d",t);
	getch();
}
