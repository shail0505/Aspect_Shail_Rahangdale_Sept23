main()
{
	int a,b,c,d,e;
	clrscr();
	printf("\nEnter five number:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	if((a>b)&&(a>c)&&(a>d)&&(a>e))
	{
		printf("first is greater.");
	}
	else
	{
		if((b>c)&&(b>d)&&(b>e))
		{
			printf("second is greater.");
		}
		else
		{
			if((c>d)&&(c>e))
			{
				printf("third is greater.");
			}
			else
			{
				if(d>e)
				{
					printf("fourth is greater.");
				}
				else
				{
					printf("fifth is greater.");
				}
			}

		}
	}

getch();
}