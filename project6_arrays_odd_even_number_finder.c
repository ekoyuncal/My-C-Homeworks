/*

3.Create an array with 15 elements and enter the values from keyboard.
Find the largest and smallest elements of array and
find the number of odd and even numbers in array and print them all on screen. 

*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	//Declare values
	int array[15];
	int i;
	int largest=0;
	int smallest=0;
	
	
	for(i=0;i<15;i++){
		printf("Please enter the %d. value ",i+1);
		
		scanf("%d",&array[i]);//Take values from user
		smallest=array[0];
		if(array[i]>largest){//Compare values to find largest one
			largest=array[i];
		}
		if(array[i]<smallest){//Compare values to find smallest one
			smallest=array[i];
		}
		
		if(array[i]%2==0){//Compare values with using mod to find evens
			printf("%d is even value\n",array[i]);
		}
		else if(array[i]%2 !=0){//Compare values with using mod to find odds
			printf("%d is odd value\n",array[i]);
		}
	}
		
	printf("Largest %d\n",largest);//Display largest
	printf("Smallest %d\n",smallest);//Display smallest
	
	
	return 0;
	
}
