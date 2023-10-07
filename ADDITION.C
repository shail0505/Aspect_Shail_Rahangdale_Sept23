#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,res;
	clrscr();
	printf("\nEnter two numbers:");
	scanf("%d %d",&n1,&n2);
	clrscr();
	printf("First number:",n1);
	printf("Second number:",n2);
	res=n1+n2;
	printf("\nAddition is:%d",res);
	res=n1-n2;
	printf("\nSubtractiion is:%d",res);
	res=n1*n2;
	printf("\nMultiplication is:%d",res);
	res=n1/n2;
	printf("\nDivision is:%d",res);
	getch();
}



