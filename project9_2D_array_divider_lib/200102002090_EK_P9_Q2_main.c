#include <stdio.h>
#include <stdlib.h>



int main(){
	int i,j;
	
	//int dizi[20][20];
	int r,c;
	printf("Please enter your array's row  and column number=>");
	scanf("%d %d",&r,&c);
	printf("\n");
	float dizi[r][c];
	printf("Please enter array elements\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%f",&dizi[i][j]);
		}
	}
	arrayPrinter(r,c,dizi);
	printf("\n");
	arrayDivider(&dizi,r,c);
	printf("\n");
	arrayPrinter(r,c,dizi); 
	
	
	return 0;
}
