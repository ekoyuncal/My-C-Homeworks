/*

1.	An array for a maximum 20 numbers,
the user will determine the total number to enter from keyboard.
Then, check the prime numbers in an array and screen them whether
it's a prime number or not a prime number. 

*/

#include <stdio.h>
#include <stdlib.h>



int main(void){
	int i,x;//Declare for for loop
	
	int size;//Declare size
	
	printf("Please enter the sizeof numbers=>");
	scanf("%d",&size);//take size from user
	
	int numbers[size];
	
	
	
	for(i=0;i<size;i++){
		int prime=0;//prime value
		printf("\nPlease enter the %d. value of numbers array",i+1);
		
		scanf("%d",&numbers[i]);//take value and compare is it prime or not
		if(numbers[i]==0 || numbers[i]==1){
				prime++;
			}
 		for(x=2;x<=numbers[i]/2;x++){
			
			if(numbers[i] % x == 0){
				prime++;
			}
			
		}
		if(prime==0){//Display if value is a prime
			printf("Your %d. value is prime",i+1);
		}
		if(prime!=0){//Display if value is not a prime
			printf("Your %d. value is not prime",i+1);
		}
	}
	
	
	
	
	return 0;	
}
	
