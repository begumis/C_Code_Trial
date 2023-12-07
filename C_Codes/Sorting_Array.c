#Sorting array elements from smallest to largest
#include <stdio.h>

int main()
{
	int i,j,a,A[]={5,7,2,9,3,4,5,1,8};
	
	for (i=0;i<9;i++){
		for(j=i+1;j<9;j++){
			if (A[i]>A[j]){
		    a=A[i];
		    A[i]=A[j];
		    A[j]=a;
		    
		}
	
	}

	}
	for (i=0;i<9;i++){
	printf("%d ",A[i]);
	}
}
