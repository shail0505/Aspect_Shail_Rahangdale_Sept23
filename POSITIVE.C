#include<stdio.h>
#include<conio.h>
void main()
{
	float num[5];
	int c,count=0,count1=0;
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
		if(num[c]>0)
		{
			count++;
		}
		else if(num[c]<0)
		{
			count1++;
		}
	}
		printf("\nPositive no.:%d",count);
		printf("\nNegative no.:%d",count1);
getch();
}