#include<stdio.h>
#include<conio.h>
void fun()
{
	static int i=1;
	printf("\n %d",i);
	if(i==10)
	return;
	i++;
	fun();
}
void main()
{
	clrscr();
	fun();
	getch();
}