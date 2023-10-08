/*Calculate prize of product*/
main()
{                                               

int tbill,qpro,prize;
clrscr();
printf("\nEnter total bill of product:");
scanf("%d",&tbill);
printf("\nEnter product quantity:");
scanf("%d",&qpro);
prize=tbill/qpro;
clrscr();
printf("\nTotal bill of product: %d",tbill);
printf("\nQuantity of product:  %d",qpro);
printf("\nThe prize of a product: %d",prize);
getch();
}