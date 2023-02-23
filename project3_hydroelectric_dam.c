/*
Write a program to assist in the design of a hydroelectric dam. Prompt the user for the height of the dam and for the number of
cubic meters of water that are projected to flow from the top to the bottom of the dam each second.
Predict how many megawatts (1MW = 106 W) of power will be produced if 90% of the work done on the water by gravity
is converted to electrical energy. Note that the mass of one cubic meter of water is 1000 kg.
Use 9.80 meters/second2 as the gravitational constant g. Be sure to use meaningful names for both the gravitational
constant and the 90% efficiency constant.
For one run, use a height of 170 m and flow of 1.30x10 3m 3/s.
The relevant formula ( w = work, m = mass, g = gravity, h = height) is: w = mgh.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int height;/*Height of the dam */
    int cubicW;/*The number of cubic meters of water*/
    double work;
	double gConstant = 9.80;
	double eConstant = 0.9;; /*Gravity Constant and Efficiency Constant(%90)*/

    printf("Hi! Welcome to the hydroelectric dam design program...\n");

    printf("Please enter the height of the dam=>");
    scanf("%d",&height);

    printf("Please enter the number of cubic meters of water=>");
    scanf("%d",&cubicW);

    work = (cubicW*1000) * (gConstant) * height; /*W= m g h */
    eConstant = 0.9;

    printf("%.lf is work.\n%.1lf is efficiency constant.\n",work,eConstant);
    printf("%.2lf MW can be produced",(work*eConstant)/1000000);/* Converted work to MW */

    return 0;

}
