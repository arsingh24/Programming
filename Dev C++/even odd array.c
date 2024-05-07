#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int a[10];
	int i,n,odd, even,sum;
	
	printf("\n enter the range");
	scanf("%d", &n);
	printf("\n enter the numbers");
	
	for (i=0;i<n;i++)
	{
		scanf("%d",a[i]);
		
	}
	if (a[i]%2==0)
	{
		even =even+a[i];	}
		else {
			odd=odd+=a[i];
			
		}
		printf("the sum of odd no. %d",odd);
		printf("the sum of even no. %d",even);
		
		return 0;
		}
