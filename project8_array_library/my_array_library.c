#include <stdio.h>
#include "my_array_library.h"


//Take elements from user
void enterElements(int array[20][20],int row,int column){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("Please enter %d.row %d.columns element\n",i+1,j+1);
			scanf("%d",&array[i][j]);
		}
	}
}
//display array
void printArray(int array[20][20],int row,int column){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%d ",array[i][j]);
			
		}
		printf("\n");
	}
	printf("\n");
}
//display spesific element
void printElement(int array[20][20],int row,int column,int m,int n){
	int i,j;
	for(i=0;i<row;i++){

        for(j=0;j<column;j++){
            
            if(i==(m-1) && j==(n-1)){

                printf("%d ",array[i][j]);
            }
        }
    }
    printf("\n");
}
//search value if there is then display where it is
void searchValue(int array[20][20],int row,int column,int index){
	int i,j;
	int tempr=0,tempc=0;//temporary row and column to find where it is
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			if( index == array[i][j]){
				tempr=i+1;
				tempc=j+1;
				
			}
			
		}
	}
	if(tempr !=0 || tempc!=0){//if really there is then display
		printf("Your index is %d.row %d.column's element\n",tempr,tempc);
	}
	printf("\n");
}
//find nonrepeat value
void findNonRepeat(int array[20][20],int row,int column){
	int i,j,k,l;
	int sayi;
	int number=0;
	
	for(k=0;k<row;k++){
        for(l=0;l<column;l++){
            sayi=array[k][l];
            int sayac=0;
            for(i=0;i<row;i++){
                for(j=0;j<column;j++){
                    if(sayi==array[i][j]){
                        sayac++;//if value equal this element, increase sayac
                    }
                }
            }
        if(sayac==1){//if only one time we find then, increase nonrepeat number value
            number++;
        }
        }
        
    }
	printf("%d nonrepeat value\n",number);
	printf("\n");	
}

void findMin(int array[20][20],int row,int column){
	int i,j;
	int min=array[0][0];//declare first element to compare them
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			if(array[i][j]<min){//new min is low one
				min=array[i][j];
			}
		}
	}
	printf("Min value=> %d\n",min);
	printf("\n");
}
//find each row and columns max
void findMaxRandC(int array[20][20],int row,int column){
	int i,j,k=0,l=0;
	int array2[column][row];
	int rowMax,columnMax;
	for(i=0;i<row;i++){

        rowMax=array[0+k][0];
        for(j=0;j<column;j++){
            if(array[i][j]>rowMax){                  //firstly we find row max for each row
                rowMax=array[i][j];
            }


        }
        printf("%d.row max value is %d\n",i+1,rowMax);
        k++;
    }                                                //then we find arrays transpose to change columns into rows to find column maxs more easily
    printf("\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){

        array2[j][i]=array[i][j];

        }
    }
    for(i=0;i<row;i++){

        columnMax=array2[0+l][0];
        for(j=0;j<column;j++){
            if(array2[i][j]>columnMax){           //we do same procedure as the row max because we change columns as a row.
                columnMax=array2[i][j];
            }


        }
        printf("%d.column max value is %d\n",i+1,columnMax);
        l++;
    }
    printf("\n");
}

void sortArrayForRow(int array[20][20],int row,int column){//sort array with using bubblesort
    int k,i,j;
    int temp;


    for(k=0;k<row;k++){
        for(i=0;i<column-1;i++){
            for(j=0;j<column-i-1;j++){
                if(array[k][j]>array[k][j+1]){ //if left one bigger than right one, we have to swip them.
                    temp=array[k][j];
                    array[k][j]=array[k][j+1];
                    array[k][j+1]=temp;
                }
            }
        }
    }
}
void findTranspoze(int array[20][20],int row,int column,int array2[20][20]){
	int i,j;
	
	for(i=0;i<row;i++){
        for(j=0;j<column;j++){

        array2[j][i]=array[i][j];//we just change i and j s position this means row is column column is row

        }
    }
    for(i=0;i<column;i++){
        for(j=0;j<row;j++){

        printf("%d ",array2[i][j]);

        }
        printf("\n");
    }
    
}
void productArrays(int array[20][20],int row1,int column1,int array2[20][20],int row2,int column2,int arrayR[20][20]){
	
	int i,j,k;
	//declare firs arrays element as a 0
	for (i = 0; i < row1; ++i) {
    	for (j = 0; j < column2; ++j) {
        	arrayR[i][j] = 0;
		}
	}

   
	for (i = 0; i < row1; ++i) {
		for (j = 0; j < column2; ++j) {
			for (k = 0; k < column1; ++k) {
				arrayR[i][j] += array[i][k] * array2[k][j];//multiply  rowsxcolumns
        	}
    	}
	}
}

void checkIdentity(int array[20][20],int row,int column){
	int i,j;
	int sayac=0;
	
	for (i = 0; i < row; ++i) {
      for (j = 0; j < column; ++j) {
        	if(i==j &&array[i][j]!=1){//if this matrix is identity matrix,it needs diagoanal elements are 1 and others 0
         		sayac++;
         		break;
			}
			else if(i!=j && array[i][j]!=0){
				sayac++;
				break;
			}
		 
        }
    }
   if(sayac==0){
		printf("This matrix is identity\n");
    }
   else if(sayac!=0){
		printf("This matrix is not identity\n");
	}
	
}
void checkSymetric(int array[20][20],int row,int column){
	int i,j,k;
	int sayac=0;
	for(i=0;i<row;i++){
		for(j=0;j<row;j++){              //if elements are symetric for example array[0][2] and array[2][0] is equal. 
			if(array[i][j]!=array[j][i]){
				sayac++;
				break;
			}
		}
	}
	if(sayac==0){
		printf("This matrix is symetric\n");
	}
	else if(sayac!=0){
		printf("This matrix is not symetric\n");
	}
	
}






