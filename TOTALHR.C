#include<stdio.h>
#include<conio.h>
void main()
{
	int eid,hr,sal;
	printf("Enter eid:");
	scanf("%d",&eid);
	printf("Enter hour:");
	scanf("%d",&hr);
	printf("salary amount:");
	scanf("%d",&sal);
	sal=sal*hr;
	printf("%d %d",eid,sal);
	getch();
}
