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
	 for(i=a;i<=b;i++)
	 {
		if((i%17)!=0)
		{
			sum=sum+i;
		}
	 }
	 printf("Sum:%d",sum);
getch();
}