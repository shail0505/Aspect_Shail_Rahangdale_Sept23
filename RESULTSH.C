main()
{
	int m1,m2,m3,tmarks;
	char name;
	float per;
	clrscr();
	printf("Enter student name:");
	scanf("%c",&name);
	printf("\nEnter marks of English:");
	scanf("%d",&m1);
	printf("\nEnter marks of Maths:");
	scanf("%d",&m2);
	printf("\nEnter marks of Science:");
	scanf("%d",&m3);
	tmarks=m1+m2+m3;
	per=tmarks/3;
	clrscr();
	printf("\nStudent name: %c",name);
	printf("\nMarks of English: %d",m1);
	printf("\nMarks of Maths: %d",m2);
	printf("\nMarks of Science: %d",m3);
	printf("\nTotal marks of subject: %d",tmarks);
	printf("\nPercentage of student: %.2f",per);
	if((m1>=35)&&(m2>=35)&&(m3>=35))
	{
		printf("Pass");
	}
	else
	{
		printf("Fail");
	}
	if(per>90)
	{
		printf("A");
	}
	if(per>60)
	{
		printf("B");
	}
	if(per>50)
	{
		printf("C");
	}
	if(per>35)
	{
		printf("D");
	}
	else
	{
		printf("\nRepeat in same class");
	}

getch();
}
