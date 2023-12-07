#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)

{
	int guess;
	int secretNumber;
	int guessNumber;
	
	srand(time(NULL)); // To get a random number we need to set the random seed with the current system time
    secretNumber=rand() %100;  //  how to create a random number in C
    guessNumber=0;
    
    
    while(guess!=-1){
    	
    	 printf("Enter a guess number between 1-99\n");
         scanf("%d", &guess);
    
    	if(guess==secretNumber){
    		printf("Congratulations! Your guess %d is correct\n", guess);
    		guess=-1;
    		}		
    	 else if( guess < secretNumber )
    		printf("please enter a higher number\n");
    	 else if(guess > secretNumber)
    		printf("please enter a lower number\n");
		
		guessNumber++;
}
	
	printf("you guessed the number after %d attempts.\n",guessNumber);
	
	system("pause");
}
