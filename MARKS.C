#include<stdio.h>
#include<conio.h>
void main()
{
	int marks[20],m,i,a=0,t=0;
	float avg;
	clrscr();
	printf("\nEnter a number:");
	for(i=0; ;i++)
	{
		scanf("%d",&marks[i]);
		if(marks[i]<=0)
		{
			break;
		}
		a++;
		t+=marks[i];
	}
	avg=(float) t/(float) a;
	printf("\nAverage:%.2f",avg);
getch();
}