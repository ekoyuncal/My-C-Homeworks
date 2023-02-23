/*
The elements of 3 Sets are given below. 

write a program that finds A/\B/\C and A/\B\C .
A={1,2,3,4}
B={2,4,11,12}
C={2,4,10,14}



*/

#include <stdio.h>
#include <stdlib.h>

//A's variables
int a1=1,a2=2,a3=3,a4=4;

//B's variables
int b1=2,b2=4,b3=11,b4=12;

//C's variables
int c1=2,c2=4,c3=10,c4=14;

//AxB 
int ab1=0,ab2=0,ab3=0,ab4=0;

//AxB\C
int abc1=0,abc2=0,abc3=0,abc4=0;

//AxBxC
int abcc1=0,abcc2=0,abcc3=0,abcc4=0;

int main(void){

	if(a1==b1 || a1==b2 || a1==b3 || a1==b4){     /*To find AxB */
		ab1 = a1;
		
	}
	
	if(a2==b1 || a2==b2 || a2==b3 || a2==b4 ){
		ab2 = a2;
		
	}
	
	if(a3==b1 || a3==b2 || a3==b3 || a4==b4 ){
		ab3 = a3;
		
	}
	
	if(a4==b1 || a4==b2 || a4==b3 || a4==b4 ){
		ab4 = a4;
		
	}
	
	printf("AxB values are %d\t %d\t %d\t %d\t\n",ab1,ab2,ab3,ab4);
	printf("Let's delete zeros\n");                 /* To find acceptable values we delete zeros */
	
	ab1=ab2;//2
	ab2=ab4;//4
	printf("AxB acceptable values %d\t %d\t",ab1,ab2); /*AxB*/
	
	printf("\n\n\n");
	printf("Let's substact C\n");					/*To find AxB\C     */
	if(ab1==c1 || ab1==c2 || ab1==c3 || ab1==c4){
		abc1=0;
		
	}
	else{
		abc1=ab1;
	}
	
	if(ab2==c1 || ab2==c2 || ab2==c3 || ab2==c4){
		abc2=0;
			
	}
	else{
		abc2=ab2;
	}
	
	if(abc1 ==0 && abc2==0){
		printf("Your AxB\\C is A empty cluster"); //If its a empty cluster, display 
	}
	else{
		printf("Your AxB\\C values %d\t %d\t\n",abc1,abc2); // If its not, display
	}
	
														/*To find AxBxC   */
	if(ab1==c1 || ab1==c2 || ab1==c3 || ab1==c4){
		abcc1=ab1;
		
	}
	
	if(ab2==c1 || ab2==c2 || ab2==c3 || ab2==c4){
		abcc2=ab2;
			
	}	
	printf("\n\n\n");
	printf("Let's cross with C\n");
	printf("Your AxBxC values %d\t %d\t",abcc1,abcc2);
	
	
	
	
	return 0;
}
