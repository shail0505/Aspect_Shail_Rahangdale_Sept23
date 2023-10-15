#include<stdio.h>
#include<conio.h>
void main()
{
	int n[4],i,sum=0;
	clrscr();
	printf("\nEnter first value:");
	scanf("%d",&n[0]);
	printf("\nEnter second value:");
	scanf("%d",&n[1]);
	printf("\nEnter third value:");
	scanf("%d",&n[2]);
	printf("\nEnter four value:");
	scanf("%d",&n[3]);
	printf("\nEnter five value:");
	scanf("%d",&n[4]);

	for(i=0;i<=4;i++)
	{
		if((n[i]%2) !=0)
		{
			sum+=n[i];

		}
		printf("\nSum of odd value: %d",sum);
		printf("\n");

	}

	getch();
}