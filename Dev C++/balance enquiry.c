#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	
	printf("WELCOME TO JIO WORLD\n");
	printf("Press 1 for balance Enquiry, Press 2 for Number,Press 3 for DND,Press 4 for Opertor\n");
	printf("choose your num");
	scanf("%d",&n);
	
	if(n==1)
	{
		printf("\n Balance Khtm Hai");
	}
	else if (n==2){
		printf("\n 8789474994");
		
	}
	else if (n==3){
		printf("\n DND Activated");
		
	}
	else if (n==4){
		printf("\n Opertor Bhagg gya");
	}
	else 
	{
		printf("\n Sorry For Inconvience");
	}
	getch();
}
