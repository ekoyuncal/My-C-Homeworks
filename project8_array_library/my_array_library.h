#ifndef my_array_library
#define my_array_library
/*
	!Array functions! their parameters=>array, row,column ,a value which is your search value
										m and n for find mth,nth value,array2 for find transpoze
										alsa row2 and column 2 to compute arrays and of course result of this function arrayR
*/
void enterElements(int array[20][20],int row,int column);

void printArray(int array[20][20],int row,int column);

void printElement(int array[20][20],int row,int column,int m,int n);

void searchValue(int array[20][20],int row,int column,int index);

void findNonRepeat(int array[20][20],int row,int column);

void findMin(int array[20][20],int row,int column);

void findMaxRandC(int array[20][20],int row,int column);

void sortArrayForRow(int array[20][20],int row,int column);

void findTranspoze(int array[20][20],int row,int column,int array2[20][20]);

void productArrays(int array[20][20],int row1,int column1,int array2[20][20],int row2,int column2,int arrayR[20][20]);

void checkIdentity(int array[20][20],int row,int column);

void checkSymetric(int array[20][20],int row,int column);

#endif
