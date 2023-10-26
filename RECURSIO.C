#include<stdio.h>
#include<conio.h>
void fun(int i)
{

	if(i==11)
	return;
	printf(" %d",i);
	fun(i+1);
	printf("\n\n %d",i);

}
void main()
{
	clrscr();
	fun(1);
	getch();
}