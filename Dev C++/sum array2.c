#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5];
	int i,sum=0;
	
	printf("\n enter the numbers ");
	
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<=4;i++){
		sum=sum+a[i];
		printf("%d",sum);
	}
	return 0;
}
