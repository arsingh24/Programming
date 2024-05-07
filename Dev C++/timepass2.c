#include<stdio.h>
#include<conio.h>

int main()
{
	int choice;
	printf("\n Biwi ke bare me jane ke liye\n PRESS 1 for woh kaha hai\n PRESS 2 for woh kise baat kr rhi hai\n PRESS 3 for woh kiske sath hai ");
	scanf("%d",&choice);
	
	switch(choice)
{

	
	case 1:
		printf("\n Boyfriend ke room pr");
		
		break;
		
	case 2:
	    printf("\n Tmse nhi kr rhi h toh Boyfriend se hi kr rhi hogi");
		
		break;
		
	case 3:
	    printf("\n Boyfriend ke Room pr hai toh uske sath hi hogi tmhre sath toh hogi nhi");
		
		break;
	default: printf("\n jakar tm khud puch le\n bhagg bsdk yaha se");
	
}
return 0;
	
				
}
