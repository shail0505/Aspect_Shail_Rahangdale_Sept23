/* loan amount*/
#include<stdio.h>
#include<conio.h>
main()
{
float lamt,rate,dur,rint,totintr,repay,emi;
	clrscr();
	printf("\nEnter loan amount:");
	scanf("%f",&lamt);
	printf("\nEnter rate:");
	scanf("%f",&rate);
	printf("\nEnter duration:");
	scanf("%f",&dur);
	rint=(lamt*rate)/100;
	totintr=rint*dur;
	repay=lamt+totintr;
	emi=(repay/(dur*12));
	printf("\nThe loan amount: %f",lamt);
	printf("\nThe rate amount: %.2f",rate);
	printf("\nThe duration: %.2f",dur);
	printf("\nThe interest rate: %.2f",rint);
	printf("\nThe total interest: %.2f",totintr);
	printf("\nThe repay amount: %.2f",repay);
	printf("\nEMI of loan amount: %.2f",emi);
getch();
}

