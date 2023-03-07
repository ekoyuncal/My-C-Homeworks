#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int i,j;
	int dizi[20][20],r,c;
	int diziT[20][20];
	int diziR[20][20];
	printf("Please enter row and column number\n");
	scanf("%d %d",&r,&c);
	
	printf("Please Enter the elements of array:");
	enterElements(&dizi,r,c);
	printArray(&dizi,r,c);
	
	printElement(&dizi,r,c,2,1);
	
	searchValue(&dizi,r,c,5);
	
	findNonRepeat(&dizi,r,c);
	
	findMin(&dizi,r,c);
	
	findMaxRandC(&dizi,r,c);
	
	sortArrayForRow(&dizi,r,c);
	printArray(&dizi,r,c);
	
	findTranspoze(&dizi,r,c,&diziT);
	
	productArrays(&dizi,r,c,&diziT,c,r,&diziR);
	printf("\n");
	printArray(&diziR,r,r);
	
	checkIdentity(&dizi,r,c);
	
	checkSymetric(&dizi,r,c);
	
	
	
	return 0;
}
