#include<stdio.h>
#include<conio.h>
void main()
{
	float num[5],avg,total=0;
	int c,count=0;
	clrscr();
	printf("Enter 1 number:");
	scanf("%f",&num[0]);
	printf("Enter 2 number:");
	scanf("%f",&num[1]);
	printf("Enter 3 number:");
	scanf("%f",&num[2]);
	printf("Enter 4 number:");
	scanf("%f",&num[3]);
	printf("Enter 5 number:");
	scanf("%f",&num[4]);
	for(c=0;c<5;c++)
	{
		if(num[c]>0)
		{
			count++;
			total=total+num[c];
		}
	}
	avg=total/count;
	printf("\nPositive number:%d",count);
	printf("\nAverage no.:%.2f",avg);
	printf("\n");
getch();
}