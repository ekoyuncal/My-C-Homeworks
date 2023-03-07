#include <stdio.h>
#include "project9_2d_array_division.h"

void arrayPrinter(int row, int column,float array[row][column]){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%.1f ", array[i][j]);
		}
		printf("\n");
	}
}

void arrayDivider(float *arrayPtr,int row,int column){
	int i;
	for(i=0;i<row*column;i++){
		*arrayPtr=(float)*arrayPtr/2.0;
		arrayPtr++;
			
	}
}


