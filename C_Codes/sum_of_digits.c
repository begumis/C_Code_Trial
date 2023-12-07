// a program that reads an integer between 1000 and 9999, and then prints the sum of all digits.
#include <stdio.h>

int main (void)
{
	int number,a,b,c,d;
	int sum,i;
	
	printf("Enter a number between 1000-9999\n");
	scanf("%d",&number);
	 
	 a=number%10;
	 i=number/10;
	 b=i%10;
	 i=i/10;
	 c=i%10;
	 i=i/10;
	 d=i%10;
	 
	sum=a+b+c+d;
	
	printf("%d",sum );
}
