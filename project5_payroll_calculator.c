/*

3.Write a program that computes the payroll for a company for N employees.
Daily Pay for per employee will be calculated as pay=hours*rate. For each employee,
the number of hours worked per day and the number of days worked a week will be entered by user.
Rates values will be entered by users for each employee.
Program will print the total payroll for company and calculate
the average daily cost of workers and print it on the screen.


*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Declared total pay,employee number,work Hour,and i for for loop
	int total=0;
	int employee=0;
	int i=0;
	int workH=0;
	//Declared all days but not weekends to find each days cost
	int mon=0;
	int tue=0;
	int wed=0;
	int thu=0;
	int fri=0;
	
	printf("Welcome to the payroll calculator\n");
	
	//Entered the number of employees
	printf("Please enter the number of employees=>");
	scanf("%d",&employee);
	
	
	//we use for loop to take each employees rate-workday-workhours
	for(i;i<employee;i++){
		int rate=0;//declare rate
		int dayW=0;//declare worked days
		printf("\nPlease enter the %d. employee's rate ",i+1);
		scanf("%d",&rate);
		
		printf("\nPlease enter the %d. employee's number of days worked a week=>",i+1);
		scanf("%d",&dayW);
		
		printf("\n");
		
		int j=0;//for second for loop
		
		for(j;j<dayW;j++){
			int day=0;//To find which day is this given day
			int daily=0;//daily pay
			printf("Please enter the %d. employees  %d. work day and days work hours\n",i+1,j+1);
			printf("You can enter days as a number between 1-5\n");
			scanf("%d %d",&day, &workH);
			daily=rate*workH;
			if(day==1){
				mon=mon+daily;
			}
			else if(day==2){
				tue=tue+daily;	
			}
			else if(day==3){
				wed=wed+daily;	
			}
			else if(day==4){
				thu=thu+daily;	
			}
			else if(day==5){
				fri=fri+daily;	
			}
			total=total+daily;
		}
		
		
		
	}
	//Display Company costs
	printf("Company Total Cost\n");
	printf("\nTotal payroll is %d\n\n\n",total);
		
	printf("Monday cost is %d\n",mon);
	printf("Tuesday cost is %d\n",tue);
	printf("Wednesday cost is %d\n",wed);
	printf("Thursday cost is %d\n",thu);
	printf("Friday cost is %d\n",fri);
		
	printf("Average daily cost is %d\n",total/5);
		
	return 0;
}
