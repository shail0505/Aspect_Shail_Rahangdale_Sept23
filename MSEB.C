/*Calculate MSEB electricity bill of customer*/
#include<stdio.h>
#include<conio.h>
main()
{
	int oreadi,nreadi,custno;
	float mbill,acbill;
	clrscr();
	printf("\nEnter customer number:");
	scanf("%d",&custno);
	printf("\nEnter new reading:");
	scanf("%d",&nreadi);
	printf("\nEnter old reading:");
	scanf("%d",&oreadi);
	mbill=nreadi-oreadi;
	printf("\nThe electricity bill of customer: %.2f",mbill);
	acbill=mbill*5;
	printf("\nTotal electricity bill of customer is: %.2f",acbill);
	getch();
}
