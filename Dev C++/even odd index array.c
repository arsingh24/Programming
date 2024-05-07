#include<stdio.h>

int main(){
	int a[10];
	int odd,even,sum,i;
	
	  printf("\n enter the number");
	  
	   for (i=0;i<=6;i++)
	   {
	   	scanf("%d",&a[i]);
	   	
	   }
	   if (a[i]%2 ==0){
	   
	   even=even+a[i];
	   }
	   else
	   {
	   	odd = odd+a[i];
	   }
	   printf("the sum of odd number%d",odd);
	   printf("the sum of even number%d",even);
	   
	   return 0;
}
