/*
Enter beginning odometer reading=> 13505.2
Enter ending odometer reading=> 13810.6
You traveled 305.4 miles. At $0.35 per mile, 
your reimbursement is $106.89.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double bgnRead;
	double endRead;
	
	
	printf("Thanks for using this Mile Reimbursement Calculator\nTO START PLEASE\n\n");
	
	printf("Enter beginning odometer reading->");
	scanf("%lf",&bgnRead);
	
	printf("Enter ending odometer reading->");
	scanf("%lf",&endRead);
	
	printf("You traveled %.1lf miles.At $0.35 per mile\nYour"
	" reimbursement is %.2lf\n",endRead-bgnRead,(endRead-bgnRead)*0.35);
}
