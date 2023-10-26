#include<stdio.h>
#include<conio.h>
int i=1;
void fun()
{
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