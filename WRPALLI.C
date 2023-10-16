#include<stdio.h>
#include<conio.h>
int pal();
void main()
{
	//int n;
	char r;
	clrscr();
	r=pal();
	if(r=='p')
	{
	  printf("Pallindrome number");
	}
	else
	{
	  printf("Not Palindrome");
	}
	getch();

}

int pal()
{
	int temp,n=1,d1,rev=0;
	printf("Enter a number:");
	scanf("%d",&n);
	temp=n;
	for(;n>0;n=n/10)
	{
		d1=n%10;
		rev=(rev*10)+d1;
	}

	if(rev==temp)
	{
		return 'p';
	}
	else
	{
		return 'np';         \
	}
}





