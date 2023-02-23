/*

2.	Write a program to process a collection of daily high temperatures.
It will take 24 temperature values for one day. These values will be taken from user and will be in centigrade.
Your program should count and print the number of hot days (high temperature 85 or higher),
the number of pleasant days (high temperature 60-84), and the number of cold days (high temperatures less than 60).
It should also display the category of each temperature and calculate the average
temperature of the day and print it on the screen

*/


#include <stdio.h>
#include <stdlib.h>


int main(void){
	//declare each class increasable value
	int hot=0;
	int bighot=0;
	int cold=0;
	int bigcold=0;
	int pleas=0;
	int bigpleas=0;
	int i=0;
	int total=0;
	printf("Welcome to the colector of daily high temperatures\n");
	//for one day
	for(i=0;i<24;i++){
		int x=0,c=0;
		//take temperature in centigrade
		printf("Please enter the %d. temperature in centigrade=>",i+1);
		scanf("%d",&c);
		x= c*(9/5)+32;//convert celcius to fahrenheit
		
		total= total+x;
		
		
		//determine each temperatures class and determine biggest value
		
		if(x >=85){
			printf("Your degree(%d) is hot\n",x);
			hot=hot+1;
			if(x>bighot){
				bighot=x;
			}
		}
		else if(x >=60 && x<84){
			printf("Your degree(%d) is pleasant\n",x);
			pleas=pleas+1;
			if(x>bigpleas){
				bigpleas=x;
			}
		}
		else{
			;
			printf("Your degree(%d) is cold\n",x);
			cold=cold+1;
			if(x>bigcold){
				bigcold=x;
			}
		}
	}
	printf("\n");
	
	printf("Your hot day number is %d\n",hot);
	printf("Your hottest days temperature is %d\n",bighot);
	
	printf("\n");
	
	printf("Your pleasant day number is %d\n",pleas);
	printf("Your pleasantest temperature is %d\n",bigpleas);
	
	printf("\n");
	
	printf("Your cold day number is %d\n",cold);
	printf("Your coldest temperature is %d\n",bigcold);
	
	printf("\n");
	//average temperature	
	printf("Your average value is %d",total/24);
	
	
	
	
	return 0;
}
