 #include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,n;
	
	printf("\n enter the value ");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n-1;j++)
		{
			printf(" ");
			
		}
		printf("*");
	
	}
	return 0;
}
