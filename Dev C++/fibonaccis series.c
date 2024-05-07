#include<stdio.h>
#include<conio.h>

int main(){
	int i,j,a=0,b=1,c=0,n;
	
	printf("\n enter the range");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		
	c=a+b;
	a=b;
	b=c;

	printf("%d\n",c);
}
	return 0;
}
