#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,t;
	clrscr();
	printf("Enter value:");
	scanf("%d %d %d",&a,&b,&c);
	t=large();
	printf("Largest no.: %d",t);
	getch();
}

int large()
{


	int a,b,c;
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
