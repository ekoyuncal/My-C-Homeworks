
/*

1.Generate a function out of the main function that finds equivalence of grades in percent.

*/

#include <stdio.h>
#include <stdlib.h>

//define prototipe function
void letterGradeFinder(int grade1);

int main(void){
	
	int gradex=0;
	
	printf("Please enter the grade to find letter grade:");//Take  grade
	scanf("%d",&gradex);
	
	printf("\n");
	
	letterGradeFinder(gradex);//Use function to find letter grade
	
	
	
	return 0;
	
}

void letterGradeFinder(int grade1){
	if(grade1 >= 90){                          //Compare grade to find  true letter interval
		printf("Your letter grade is AA\n");
	}
	else if(grade1 >= 80 && grade1 <= 89){
		printf("Your letter grade is BA\n");
	}
	else if(grade1>= 75 && grade1 <= 79 ){
		printf("Your letter grade is BB\n");	
	}
	else if(grade1>=70 && grade1 <=74){
		printf("Your letter grade is CB\n");
	}
	else if(grade1>=65 && grade1<=69){
		printf("Your letter grade is CC\n");
	}
	else if(grade1>= 60 && grade1<=64){
		printf("Your letter grade is DC\n");
	}
	else if(grade1>=50 && grade1<=59){
		printf("Your letter grade is DD\n");
	}
	else if(grade1>=40 && grade1<=49){
		printf("Your letter grade is FD\n");
	}
	else if(grade1 <= 39){
		printf("Your letter grade is FF\n");
	}
}
