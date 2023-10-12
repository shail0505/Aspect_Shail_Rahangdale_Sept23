#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter value for a,b and c:");
	scanf("%d %d %d",&a,&b,&c);
	if((a>b)&&(a>c))
	{
		printf("A is greater: %d",a);
	}

		else if(b>c)
		{
			printf("B is greater: %d",b);
		}

		else
		{
			printf("C is greater: %d",c);
		}
getch();
}