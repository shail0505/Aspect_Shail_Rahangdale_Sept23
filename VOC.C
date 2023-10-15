#include<stdio.h>
#include<conio.h>
void voc();
void main()
{
	voc();
	getch();
}
void voc()
{
	int r,h;
	float voc;
	clrscr();
	printf("\nEnter value for r and h:");
	scanf("%d %d",&r,&h);
	voc=3.14*r*r*h;
	printf("Volume of cylinder:%.2f",voc);
}