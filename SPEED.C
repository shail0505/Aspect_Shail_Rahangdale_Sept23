#include<stdio.h>
#include<conio.h>
void speed();
void main()
{
	speed();
	getch();
}
void speed()
{
	int dist,time,s;
	clrscr();
	printf("\nEnter value for distance and time:");
	scanf("%d %d",&dist,&time);
	s=dist/time;
	printf("Speed: %d",s);
}