#tax calculator by age and salary
#include <stdio.h>
int main( )
{
	int x,y,tax;
	unsigned int i;
	
	printf("Enter the age of employee and salary.\n");
	scanf("%d%d",&x,&y);	
	
	if(x>=18 && x<=35){
	i=y-17000;
	tax=0.16*17000+0.25*i;
	printf("tax: %d",tax);
	}
	
	else if(x>=36 && x<=50){
	i=y-23000;
	tax=0.16*23000+0.25*i;
	printf("tax: %d",tax);
	}
	
    else if(x>=51 && x<=74){
	i=y-29000;
	tax=0.16*29000+0.25*i;
	printf("tax: %d",tax);
	}
	
    else if(x>=75 && x<=95){
	i=y-14000;
	tax=0.16*14000+0.25*i;
	printf("tax: %d",tax);
	}
	
	
}

