#include <stdio.h>
#include<conio.h>

int main(){
	int n;
	printf("WELCOME TO WEEK TABLE \n");
	printf("\n Press 1 for FIRST day \n Press 2 for second day \n Press 3 for Third day \n Press 4 for fourth Day \n Press 5 for Fifth day \n Press 6 For Sixth day \n Press 7 for Seventh Day\n");
	printf("Enter your choice\n");
	scanf("%d",&n);
	
	if (n==1)
	{
		printf("Monday");
	}
	else if (n==2)
	{
	printf("Tuesday");
	
	}
	else if (n==3)
	{
		printf("Wednesday");
	}
	else if (n==4)
	{
		printf("Thursday");
		
	}
	else if (n==5)
	{
		printf("Friday");
		
	}
	else if (n==6)
	{
		printf("Saturday");
	}
     else if (n==7)
     {
     	printf("Sunday");
     	
	 }
	 else 
	 {
	 	printf("Week Khtm");
	 }
	return 0;
}
