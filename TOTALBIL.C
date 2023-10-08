/*Calculate total bill with 10% discount*/
#include<stdio.h>
#include<conio.h>
main()
{
	int rate,quantity;
	float tbill,dis;
	clrscr();
	printf("\nEnter rate of product:");
	scanf("%d",&rate);
	printf("\nEnter quantity of product:");
	scanf("%d",&quantity);
	tbill=rate*quantity;
	dis=tbill-(tbill*10/100);
	printf("\nRate of product: %d",rate);
	printf("\nQuantity of product: %d",quantity);
	printf("\nTotal bill of product: %.2f",tbill);
	printf("\nDiscount of product: %.2f",dis);
getch();
}

