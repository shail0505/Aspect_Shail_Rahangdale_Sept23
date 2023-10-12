#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	double a,b,c,p1;
	clrscr();
	printf("\nEnter three float numbers:");
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);

	p1=(b*b)-(4*(a)*(c));

	if(p1>0 && a!=0)
	{
		double a1,a2;
		p1=sqrt(p1);
		a1=(-b+p1) / (2*a);
		a2=(-b-p1) / (2*a);
		printf("Root1 = %.5lf\n",a1);
		printf("Root2= %.5lf\n",a2);
	}
	else
	{
		printf("\nImpossible to find roots.\n");
	}
getch();
}