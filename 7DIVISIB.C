#include<stdio.h>
#include<conio.h>
void main()
{
	 int a,b,sum=0,temp,i;
	 clrscr();
	 printf("Enter two integer number:");
	 scanf("%d %d",&a,&b);
	 if(a>b)
	 {
		temp=b;
		a=b;
		a=temp;
	 }
	 for(i=a+1;i<b;i++)
	{
		if((i%7)==2 || (i%7)==3)
		{
			printf("\nDivided by 7:%d",i);
		}
	 }
getch();
}