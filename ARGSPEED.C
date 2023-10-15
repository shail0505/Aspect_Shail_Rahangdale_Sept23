#include<stdio.h>
#include<conio.h>
void main()
{
	int d,t;
	speed(d,t);
	getch();
}
speed(int dist, int time)
{
	int s;
	clrscr();
	printf("\nEnter value for distance and time:");
	scanf("%d %d",&dist,&time);
	s=dist/time;
	printf("Speed: %d",s);
}