#include<stdio.h>

int main(){
	int a[5];
	int sum=0,i;
	
	printf("\n enter the numbers");
	
	for (i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for (i=0;i<=4;i++){
	
		
	
		sum=sum+a[i];
		
	}
	printf("%d",sum);
	
	return 0;
	
}
