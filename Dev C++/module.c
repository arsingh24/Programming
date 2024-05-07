#include<stdio.h>
#include<conio.h>

int main(){
	int n,a,module;
	
	printf("\n enter the two numbers");
	scanf("\n%d%d",&n,&a);
	
	n%=a;
	
	printf("module = %d",n);
	
return 0;
}
