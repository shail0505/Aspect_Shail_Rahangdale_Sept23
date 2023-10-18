#include<stdio.h>
#include<conio.h>
void login();
void main()
{
	clrscr();
	login();
	getch();
}
void login()
{
	char user[20],pass[20];
	int s;
	clrscr();
	printf("Enter username: ");
	scanf("%s",&user);
	printf("\nEnter password: ");
	scanf("%s",&pass);
	s=authenticate(user,pass);
	if(s==1)
	{
		clrscr();
		printf("\nCorrect password...");
	}
	else
	{
		printf("\nIncorrect password...");

	}
getch();
}
int authenticate(char usr1[],char ps1[])
{
	char tusr[]={"Anna"};
	char tps[]={"1234"};
	clrscr();
	//printf("%s %s",tusr,tps);
	if(strcmp(usr1,tusr)==0 && strcmp(ps1,tps)==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

