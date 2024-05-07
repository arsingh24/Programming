#include  <stdio.h>
#include  <conio.h>

void main()

{
	int num;
	printf("\n enter the no");
	scanf("%d", &num);
	if (num% 2==0){
	
	printf("even number");
   }
    else
   {
	printf ("odd number");	

}
printf ("\n outside the if -odd block");
return 0;
}
