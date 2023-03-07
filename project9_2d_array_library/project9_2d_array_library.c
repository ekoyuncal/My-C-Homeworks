#include <stdio.h>
#include "project9_2d_array_library.h"


void enterElements(int *array,int row,int column){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			scanf("%d",&(*array));//take elements from user
			array++;
		}
	}
}
void printArray(int *array,int row,int column){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%d ",(*array));//display value
			array++;
			
		}
		printf("\n");
	}
	printf("\n");
}
void printElement(int *array,int row,int column,int m,int n){
	int i,j;
	for(i=0;i<row;i++){

        for(j=0;j<column;j++){
            
            if(i==(m-1) && j==(n-1)){//If it is your element then print it

                printf("array[%d][%d]=%d ",m,n,*array);
			}
			array++;
        }
    }
    printf("\n");
}
void searchValue(int *array,int row,int column,int index){
	int i,j;
	int tempr=0,tempc=0;//temporary row and column to find where it is
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			if( index == *array){
				tempr=i+1;
				tempc=j+1;
				
			}
			array++;	
		}
	}
	if(tempr !=0 || tempc!=0){//if really there is then display
		printf("Your index is %d.row %d.column's element\n",tempr,tempc);
	}
	printf("\n");
}

//find nonrepeat value
void findNonRepeat(int *array,int row,int column){
	int i,j,k,l;
	int sayi;
	int number=0;
	int *ptrReminder;
	int *copyArray=array;
	ptrReminder=array;
	
	
	for(k=0;k<row;k++){
        for(l=0;l<column;l++){
            sayi=*copyArray;
            int sayac=0;
            array=ptrReminder;
            for(i=0;i<row;i++){
                for(j=0;j<column;j++){
                    if(sayi==*array){
                        sayac++;//if value equal this element, increase sayac
                    }
                array++;
				}
            	
            }
        	
        if(sayac==1){//if only one time we find then, increase nonrepeat number value
            number++;
        }
        copyArray++;
        }
        
    }
	printf("%d nonrepeat value\n",number);
	printf("\n");
}
//find min value to compare each one
void findMin(int *array,int row,int column){
	int i,j;
	int min=*array;//declare first element to compare them
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			if(*array<min){//new min is low one
				min=*array;
			}
			array++;
		}
	}
	printf("Min value=> %d\n",min);
	printf("\n");
}

//find each row and columns max
void findMaxRandC(int *array, int row, int column){
	int i,j,k;
	int *tempPtr;
	int rowMax=0;
	int columnMax=0;
	tempPtr=array;

	for(i=0; i<row; i++){
		rowMax=*array;
		for(j=0; j<column; j++){  // we use array to find rows max but when we find columns max we have to use transpoze
			if(rowMax<*array){
				rowMax=*array;
			}
			array++;
		}
		printf("%d.row Max value is %d\n",(i+1),rowMax);
		
	} 
	
	for(i=0; i<column; i++){
		array=tempPtr;
		columnMax=*array;
		for(j=0; j<row; j++){//we first use column loop after that row loop to use transpoze
			if(columnMax<*array){
				columnMax=*array;
			}
			array=(array+column);
		}
		printf("%d.column Max value is %d\n",i+1,columnMax);
		tempPtr++;	
	}
	printf("\n");
}
void sortArrayForRow(int *array,int row,int column){//sort array with using bubblesort
    int k,i,j;
    int *tempPtr;
	int tempValue;
	tempPtr=array;
    for(k=0;k<row;k++){
        for(i=0;i<column-1;i++){
            for(j=0;j<column-i-1;j++){
                if(*(array+j)>*(array+j+1)){ //if left one bigger than right one, we have to swip them.
                    tempValue=*(array+j);
                    *(array+j)=*(array+j+1);
                    *(array+j+1)=tempValue;
                }
            array=array+column;   /*We increase column column to pass other row*/
            }
        
        }
        
    }
}
void findTranspoze(int *array,int row,int column,int *array2){
	int i,j;
	int *tempPtr,*tempPtr2;//We declare their address
	tempPtr=array;
	tempPtr2=array2;
	for(i=0;i<column;i++){
		array=tempPtr;
		;//we just change arrays address to add column
        for(j=0;j<row;j++){
			
        	*array2=*(array+i);
			array=array+column;
			array2++;
			
        }
    }
    array2=tempPtr2;
    for(i=0;i<column;i++){
        for(j=0;j<row;j++){

        	printf("%d ",*array2);//display transpoze
			array2++;
        }
        printf("\n");
    }
    
}

void productArrays(int *array,int row1,int column1,int *array2,int row2,int column2,int *arrayR){
	
	int i,j,k;
	int *tempPtrR;//we declare their adress
	int *tempPtr;
	int *tempPtr2;
	int *tempPtr22;
	
	int sayi;
	
	tempPtrR=arrayR;
	tempPtr=array;
	tempPtr2=array2;
	tempPtr22=array2;
	//declare firs arrays element as a 0
	for (i = 0; i < row1; ++i) {
    	for (j = 0; j < column2; ++j) {
        	*arrayR = 0;
        	arrayR++;
		}
	}

   arrayR=tempPtrR;
	for (i = 0; i < row1; i++) {
		for (j = 0; j < column2; j++) {
			array2=tempPtr2;
			for (k = 0; k < row2; k++){
				//printf("%d arrayR %d array1 %d arrayT\n",*arrayR,*(array+k),*(array2+column2));
				sayi=0;
				sayi=k*column2;
				*arrayR += (*(array+k) * (*(array2+sayi)));//multiply  rowsxcolumns
				
        	}
        	arrayR++;
        	tempPtr2++;
        	
    	}
    	tempPtr2=tempPtr22;
    	array=array+column1;
	}
}
void checkIdentity(int *array,int row, int column){
	int i,j;
	int sayac=0;               /*We declare address to come back*/
	int *tempPtr;
	tempPtr=array;
	for(i=0;i<row;i++){
		array=(tempPtr+(i*column));//we declare them firstly
		for(j=0;j<column;j++){
			if(i==j && *array==1){//if his number and value equal.
				sayac++;
			}
			else if(i!=j && *array==0){
				sayac++;
			}
			array++;
		}
	}
	
	if(sayac==(column*row)){
		printf("Its an Identity Matrix\n");
	}
	else{
		printf("Its not an Identity Matrix\n");
	}
	
}
void checkSymetric(int *array,int row,int column){
	int i,j;
	int sayac=0;
	int tempArray[column][row];
	int *tempPtr;//We declare their address to we can come back later them.
	int *tempPtr2;
	int *tempPtr3;
	tempPtr=array;
	tempPtr2=array;
	tempPtr3=tempArray;
	for(i=0;i<column;i++){
		array=tempPtr;
		for(j=0;j<row;j++){
			tempArray[i][j]=*array;
			array=array+column;
		}
		tempPtr++;
	}
	array=tempPtr2;
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			if(*array==*tempPtr3){//if this value equal its symetric then increase sayac
				sayac++;
			}
			array++;
			tempPtr3++;
		}
	}
	
	if(sayac==(column*row)){// if sayac equal to arrays element number
		printf("Its an Symetric Matrix\n");
	}
	else{
		printf("Its not an Symetric Matrix\n");
	}
}
