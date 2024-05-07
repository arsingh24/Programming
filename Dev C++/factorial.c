#include<stdio.h>
#include<conio.h>

int main(){
	
	int n,i=1,fact=1;
	
	printf("\n enter the number");
	scanf("%d",&n);
	
	while(i<=n)
	{
		fact*=i;
		i++;
		
	}
	printf("\n factorial of a number=%d", fact);
	
	return 0;
	
}
