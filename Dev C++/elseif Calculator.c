#include<stdio.h>
#include<conio.h>

void main(){
	int a,b,choice;
	
    printf("Welcome to My Calcultor\n ");
	printf(" Press 1 for Addition\n Press 2 for Subtraction\n Press 3 for Multiply\n Press 4 for Divide\n Press 5 for Modulus\n");
	printf("Choose your Choice\n");
	scanf("%d",&choice);
	printf(" enter your numbers\n");
	scanf("%d%d",&a,&b);
	
	if (choice==1){
		a+=b;
		printf("Addition of a&b = %d",a);
		
	}
	else if(choice==2){
		a-=b;
		printf("Subtraction of a&b= %d",a);
		
	}
	else if (choice==3){
		a*=b;
		printf("Multiplication of a&b= %d",a);
		
	}
	else if (choice==4){
	    a/=b;
	     printf("Division of a&b= %d",a);
}
 
    else if(choice==5){
        a%=b;
		printf("Modulus of a&b= %d",a);	
	}
else 
{
	printf("Nhi Ho payega");
}
getch();
}
