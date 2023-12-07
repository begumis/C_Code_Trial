#include <stdio.h>
int main(void)
{
	int i,j;
	int x=7;
	int y=0;
	
	
	
	for(i=1;i<=4;i++){
		for(j=1;j<=y;j++){
			printf(" ");
		}
		for(j=1;j<=x;j++){
			printf("*");
		}
		
		x=x-2;
		y=y+2;
		printf("\n");
		
	}
	
 	
}		
			

