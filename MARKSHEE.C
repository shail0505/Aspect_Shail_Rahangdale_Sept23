/*Calculate total score marks*/
#include<stdio.h>
#include<conio.h>
main()
{
	int m1,m2,m3,tmarks;
	float per;
	clrscr();
	printf("\nEnter marks of English:");
	scanf("%d",&m1);
	printf("\nEnter marks of Maths:");
	scanf("%d",&m2);
	printf("\nEnter marks of Science:");
	scanf("%d",&m3);
	tmarks=m1+m2+m3;
	per=tmarks/3;
	clrscr();
	printf("\nMarks of English: %d",m1);
	printf("\nMarks of Maths: %d",m2);
	printf("\nMarks of Science: %d",m3);
	printf("\nTotal marks of subject: %d",tmarks);
	printf("\nPercentage of student: %.2f",per);
	getch();
}
