#include<stdio.h>
#include<conio.h>

int main()
{
	float p,r,t,SI;
	printf("\n enter the numbers");
	scanf("%f%f%f",&p,&r,&t);
	
	SI=p*r*t/100;
	printf("\n SI =%f",SI);
	return 0;
}
