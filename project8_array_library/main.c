#include <stdio.h>
#include <stdlib.h>
#define maxsize 20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int array[maxsize][maxsize];
	int array2[maxsize][maxsize];
	int array3[maxsize][maxsize];
	int r,c;
	printf("Please enter row and column\n");
	scanf("%d %d",&r,&c);
	
	
	enterElements(array,r,c);
	
	printArray(array,r,c);
	printf("Element which is you want\n");
	printElement(array,r,c,3,2);
	
	searchValue(array,r,c,5);
	
	findNonRepeat(array,r,c);
	
	findMin(array,r,c);
	findMaxRandC(array,r,c);
	
	printf("Array(before bubblesort)\n");
	printArray(array,r,c);
	sortArrayForRow(array,r,c);
	printf("Array(after bubblesort)\n");
	printArray(array,r,c);
	
	printf("Array\n");
	printArray(array,r,c);
	printf("Array's transpoze'\n");
	findTranspoze(array,r,c,array2);
	
	//array 2's size is reverse of first array so, we have to use first column as a row and first row as a column
	
	printf("Arrays multiply array\n");
	productArrays(array,r,c,array2,c,r,array3);
	printf("\n");
	printArray(array3,r,r);
	printf("\n");
	
	checkIdentity(array,r,c);
	
	checkSymetric(array,r,c);
	
	
	return 0;
}
