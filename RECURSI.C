#include<stdio.h>
#include<conio.h>
void fun(int i)
{
	//static int i=1;
	//printf("\n %d",i);
	if(i==11)
	return;
	printf("\n %d",i);
	fun(i+1);
}
void main()
{
	clrscr();
	fun(1);
	getch();
}