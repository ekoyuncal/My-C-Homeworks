/*

2.You should generate two variables and swap their values with each other,
please do swapping out of the main function and only call this swapping function in the main function

*/

#include <stdio.h>
#include <stdlib.h>

//define prototipe function
void swap(int *a, int *b);//We take values' address

int main(void){
	//Declare variables
	int  number1 = 13;
	int  number2 = 27;
	
	
	//Before values
	printf("First values : %d %d",number1,number2);
	//Use function to swap numbers
	swap(&number1,&number2);//We use ampersant to give values address
	printf("\n");
	//After values
	printf("Last values : %d %d",number1,number2);
	
	
	
	return 0;
}

void swap(int *a,int *b){
	//Declare temporary value
	int temp;
	
	//Change them with using pointer to go address and change permanently
	temp=*a;
	*a = *b;
	*b= temp;
}
