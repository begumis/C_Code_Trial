//number guess game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
	int guess,n,i,j,k,b,flag=0,x,a=0,z=0,temp,t,v,w;
	int GuessNumber=0;
	int A[10],B[10],arr[100];
	
	for(i=1;i<=46;i++){
		printf("-");
	}
		printf("\n");
	for(i=1;i<=46;i++){
	
		if (i<=8||46-i<8){
		printf("-");
		}
		if(i>8 && i<22){
				printf(" ");
				
		}
	if(i==15)
	printf("NUMBER GUESS GAME");
	}
	printf("\n");
	
		for(i=1;i<=46;i++){
	printf("-");
	}
	
	
	srand (time(NULL));
	GuessNumber=0;
	
		printf("\nEnter the number of digits for the game 4-10=\n");
	  	scanf("%d",&n);
	  	for(j=0;j<n;j++){
			 A[j]=rand()%10;
		
			
			for(k=0;k<j;k++){
			if(A[j]==A[k]||A[0]==0){
					j--;
		   			k=j;
					}
				}
	}
		
		
		while(flag!=n){
		printf("Enter the  guess=\n");
		scanf("%d",&guess);
		
		if(z==GuessNumber){
	 		arr[z]=guess;
	 		z++;
	 		
	 	}
					GuessNumber++;
	 	for(x=n-1;x>=0;x--){
	 		B[x]=guess%10;
	 	guess=guess/10;
	 		
}
	flag=0;	 
	for(t=0;t<n;t++){
		if(A[t]==B[t]){
	 		flag++;
	 		
		 }	 		 
	}
	 a=0;
		for(j=0;j<n;j++){
			for(v=0;v<n;v++){
			if(A[v]==B[j]){
					a++;	
					
			}
		}
	}
 b=flag-a;
 if(b<0)
 b=b*-1;
		printf("+%d-%d\n",flag,b);	
}
		if(flag==n){
		printf( "\nCongratulations! Your guess is correct.\n");	 
		 printf("Total number of tries: %d",GuessNumber);
		 	printf("\nAll guesses from smallest to larges: ");

	 		for(z=0;z<GuessNumber;z++){
		 for(w=GuessNumber-1;w>=0;w--){
		 	if(arr[w]<arr[w-1]){
			 	temp=arr[w];
			 	arr[w]=arr[w-1];
			 	arr[w-1]=temp;
			 }

		 }
			 
		printf("%d\t",arr[z]);

		}	
	 }

}
