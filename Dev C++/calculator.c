#include<stdio.h>
#include<conio.h>

void main()
{
	int choice;
		int num1,num2,store;
		printf("enter the two numbers\n");
		scanf("%d%D",&num1,&num2);
	
		printf("press 1 for addition, press 2 for subtraction,press 3 for multiplication,press 4 for division");
		scanf("%d",&choice);
	
		switch(choice)
		{
			case 1:
				store=num1+num2;
				printf("%d",store);
				break;
				
		    case 2:
		    	store = num1-num2;
		    	printf("%d",store);
		    	break;
		    	
		    case 3:
			      store=num1*num2;
				  printf("%d",store);
				  break;
				  
			case 4:
			      store=num1/=num2;
				  printf("%d",store);
				  break;	  	
		    	
		    	default: printf("\n wrong choice");
		    	
		 } 
		 
		 return 0;
}
