#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//Declared and initialized variables.
	
	int a = 200;
	int b = 12345;
	int w = 1234567890;
	int s = 4043;
	double t = 2.13459;
	double y = 1.1415927;
	char c = 'K';
	long int pp = 2541567890;
	
	//Display additions
	
	printf("a+c = %d\n",a+c);
	printf("t+c = %lf\n",t+c);
	printf("y+t = %lf\n",y+t);
	printf("a+t = %lf\n",a+t);
	printf("s+b = %d\n",s+b);
	printf("w+b = %d\n",w+b);
	printf("s+c = %d\n",s+c);
	printf("w+c = %d\n",w+c);
	printf("w+pp = %lu\n",w+pp);
	
	
	return 0;
	
}
