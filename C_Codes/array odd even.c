#include<stdio.h>

int main()
{
	int A[]={5,7,2,9,3,4,5,1,8},even[10], odd[10],x,y ;
	int i;
	

			printf("Even numbers in the array: ");
	for(i=0;i<9;i++){
		
		if(A[i]%2==0){
			even[x++]=A[i];
			printf(" %d\t",A[i]);
			}
		}
	
	
			
			printf("\nOdd numbers in the array: " );
		for(i=0;i<9;i++){
			if(A[i]%2!=0){
			odd[y++]=A[i];
			printf(" %d\t",A[i]);
		}
			
		
	}
	

}
