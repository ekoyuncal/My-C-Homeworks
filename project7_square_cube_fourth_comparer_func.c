/*

3.Please define 4 variables and find the sum of these variables,
the sum of the square of these, the sum of the cubes of these and the sum of the fourth power of these.
Lastly compare the result of these operations and the print the biggest one in these results.
Please define 4 functions out of the main function that find desired summations
and one more function find the biggest result of the summation.
Only call user defined functions in main function.

*/


#include <stdio.h>
#include <stdlib.h>

//define prototipe function
int squareSum(int num1, int num2, int num3, int num4);

int cubeSum(int num1, int num2, int num3, int num4);

int fourthSum(int num1, int num2, int num3, int num4);

int sumComparer(int sum1, int sum2, int sum3);

int main(void){
	//Declare values
	int a=5;
	int b=12;
	int c=3;
	int d=2;
	
	//Display sum values
	
	
	printf("Values square sum =>%d\n",squareSum(5,12,3,2));
	
	printf("Values cube sum =>%d\n",cubeSum(5,12,3,2));
	
	printf("Values fourth sum =>%d\n",fourthSum(5,12,3,2));
	
	printf("The biggest sum result =>%d\n",sumComparer(squareSum(5,12,3,2),cubeSum(5,12,3,2),fourthSum(5,12,3,2)));
	
	
	return 0;
}
//Define function with all details
int squareSum(int num1, int num2, int num3, int num4){
	return (num1*num1)+(num2*num2)+(num3*num3)+(num4*num4);
}

int cubeSum(int num1, int num2, int num3, int num4){
	return (num1*num1*num1)+(num2*num2*num2)+(num3*num3*num3)+(num4*num4*num4);
}

int fourthSum(int num1, int num2, int num3, int num4){
	
	return (num1*num1*num1*num1)+(num2*num2*num2*num2)+(num3*num3*num3*num3)+(num4*num4*num4*num4);
}

int sumComparer(int sum1, int sum2, int sum3){
	
	if(sum1 > sum2 && sum1 > sum3){
		return sum1;
	}
	else if(sum2 > sum1 && sum2 > sum3){
		return sum2;
	}
	else if(sum3 > sum1 && sum3 > sum2){
		return sum3;
	}	
}
