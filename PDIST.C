#include<stdio.h>
#include<conio.h>
void main()
{
	float x1,y1,x2,y2,dist;
	clrscr();
	printf("Enter value for x1,x2:");
	scanf("%f %f",&x1,&x2);
	printf("Enter value for y1,y2:");
	scanf("%f %f",&y1,&y2);
	dist=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("Points are: %.f",dist);
	getch();
}