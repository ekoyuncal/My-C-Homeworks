/*

1.Write a program to calculate the value of sin(x) using expansion.
Limit will be determined by user to expand the series. Draw the flowchart of program.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Define math.h for pow function


int main(void){
	//Define sin values which is degree and radyan
	double sinValue=0.0;
	double sinValueR=0.0;
	double pi =3.14;
	//Define expand
	int expand=0;
	//Define for for loops
	int i,j;
	//Define Fact
	int fact;
	
	double sum=0.0;
	
	printf("Please enter the value of x sinx series(In Degree) =>");
	scanf("%lf",&sinValue);//Take sinvalue in degree
	
	printf("\n\n");
	
	sinValueR=sinValue*(pi/180.0);//convert degree to radyan
	
	printf("Please enter the limit expand =>");
	scanf("%d",&expand);//take limit expand
	
	for(i=0;i<=expand;i++){
		fact=1;
		for(j=1;j<=(2*i+1);j++){
			fact=fact*j;
			
		}
		
		sum=sum+pow(-1,i)*(pow(sinValueR,2*i+1)/fact);//summarize for each i values
	}
	
	printf("Your value's  sin(x) expansion is %lf",sum);//display sum
	
	return 0;
	
	

}
