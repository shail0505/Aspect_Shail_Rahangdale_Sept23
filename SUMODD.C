#include<stdio.h>
#include<conio.h>
void main()
{
	int num[5],total=0,c;
	clrscr();
	printf("Enter 1 number:");
	scanf("%d",&num[0]);
	printf("Enter 2 number:");
	scanf("%d",&num[1]);
	printf("Enter 3 number:");
	scanf("%d",&num[2]);
	printf("Enter 4 number:");
	scanf("%d",&num[3]);
	printf("Enter 5 number:");
	scanf("%d",&num[4]);
	for(c=0;c<5;c++)
	{
		if((num[c]%2!=0))
		{

			total=total+num[c];
		}
	}

	printf("\nOdd number:%d",total);
	printf("\n");
getch();
}