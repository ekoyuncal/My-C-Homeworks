/*

2.	Make an empty array of 5-by-5 elements,
enter the elements into array from keyboard,
and print upper and lower triangle of matrix. 

*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	//Declare array size
	int array[5][5];
	int i,j;
	
	//Take elements of matrix
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Please enter the elements of matrix [%d][%d]",i+1,j+1);
			scanf("%d",&array[i][j]);
		}
		
	}
	
	system("cls");//Clean the display screen
	printf("\t\t\t[The matrix]\n");//Display the taken matrix
	for(i=0;i<5;i++){
		printf("\t|");
		for(j=0;j<5;j++){
	
			printf("%d\t",array[i][j]);
		}
		printf("|");
		printf("\n");
		
	}
	printf("\n\n");
	
	printf("\t\t[The Lower Triangle matrix]\n");//Display the taken lower triangle matrix
	for(i=0;i<5;i++){
		printf("\t|");
		
		for(j=0;j<5;j++){
			if(i >= j){//compare rows and columns to display lower triangle and display zero for upper side
				printf("%d\t",array[i][j]);
			}
			else{
				printf("%d\t",0);
			}
		}
		printf("|");
		printf("\n");
	}
	printf("\n\n");
	
	printf("\t\t[The Upper Triangle matrix]\n");//Display the taken upper triangle matrix
	for(i=0;i<5;i++){
		printf("\t|");
		
		for(j=0;j<5;j++){
			if(i <= j){//compare rows and columns to display upper triangle and display zero for lower side
				printf("%d\t",array[i][j]);
			}
			else{
				printf("%d\t",0);
			}
		}
		printf("|");
		printf("\n");
	}
	
	return 0;
}
