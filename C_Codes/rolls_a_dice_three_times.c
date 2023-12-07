#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int sum;
	srand(time(NULL));
	 int roll1,roll2,roll3;
	 roll1=1+rand()%6;
	 roll2=1+rand()%6;
	 roll3=1+rand()%6;
	 
	 sum= roll1+roll2+roll3;
	 
	 printf("%d + %d + %d = %d",roll1,roll2,roll3,sum);
}

