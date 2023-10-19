#include<stdio.h>
#include<conio.h>
int speed();
void main()
{
	int r;
	r=speed();
	printf("Speed:%d",r);
	getch();
}
int speed()
{
	int dist,time,s;
	clrscr();
	printf("\nEnter value for distance and time:");
	scanf("%d %d",&dist,&time);
	s=dist/time;
	return s;
}