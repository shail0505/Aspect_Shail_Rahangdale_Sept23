main()
{
	int a,b,c,d;
	clrscr();
	printf("\nEnter three number:");
	scanf("%d %d %d",&a,&b,&c);
	printf("\nEntered three number is:%d %d %d",a,b,c);
	if(a>b)
	{
		d=a;
		a=b;
		b=d;
	}
	if(b>c)
	{
		d=b;
		b=c;
		c=d;
	}
	if(a>b)
	{
		d=a;
		a=b;
		b=d;
	}
	if(b>c)
	{
		d=b;
		b=c;
		c=d;
	}
printf("\nAfter sorting sorted number is: %d %d %d",a,b,c);
getch();
}