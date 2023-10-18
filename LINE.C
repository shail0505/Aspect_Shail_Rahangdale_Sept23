#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,j=1,x=0;
	clrscr();
	printf("Enter line number:");;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{

		x=0;
		while(x<3)
		{
			printf(" %d",j++);
			x++;
		}
		printf("\n");
	}
getch();
}