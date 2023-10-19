#include<stdio.h>
#include<conio.h>
int speed();
void main()
{
	int r,a,b;
	r=speed(a,b);
	printf("Speed:%d",r);
	getch();
}
int speed(int dist,int time)
{
	int s;
	clrscr();
	printf("\nEnter value for distance and time:");
	scanf("%d %d",&dist,&time);
	s=dist/time;
	return s;
}