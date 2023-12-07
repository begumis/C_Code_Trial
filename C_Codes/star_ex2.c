#include <stdio.h>
int main(void)
{
	int i,j,x=1;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=x;j++){
			printf("*");
			
		}
		x=x+3;
		printf("\n");
	}
	
}
