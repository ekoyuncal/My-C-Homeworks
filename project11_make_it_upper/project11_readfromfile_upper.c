#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void PrintFileContent(FILE *fptr);
void copy_file(FILE *fptr1,FILE *fptr2);
int findNumberofChar(FILE *fptr);

int main(){
	
	char fileName1[20];//first.txt
	char fileName2[20];//second.txt
	FILE *fptr1;//file1 pointer
	FILE *fptr2;//file2 pointer
	
	printf("Enter the filename to open for reading\n");//take first file's name from user
	scanf("%s",fileName1);
	
	printf("Enter the filename to open for reading and writing\n");//take second file's name from user
	scanf("%s",fileName2);
	
	fptr1=fopen(fileName1,"r+");//open as a reader
	fptr2=fopen(fileName2,"w+");//open or create if its already exsist then delete its contest
	
	if(fptr1 !=NULL && fptr2 !=NULL){
		int cNumber;
		
		PrintFileContent(fptr1);
		copy_file(fptr1,fptr2);
		cNumber=findNumberofChar(fptr2);
		fseek(fptr2,0,SEEK_END);//Declare second file's pointer end to the write new line
		fprintf(fptr2,"\n\nThe file second.txt has %d characters",cNumber);            
		fseek(fptr2,0,SEEK_SET);//Declare second file's pointer as a first address to print entirely
		PrintFileContent(fptr2);
		
	}	
	else{
		printf("Error opening file\n");
	}	
	
	fclose(fptr1);
	fclose(fptr2);
	
	
	return 0;
}
 /* i added my all functions pointer reseter as a first address to use them more easily */
void PrintFileContent(FILE *fptr){
	int c = fgetc(fptr);
	
	while(c != EOF){
		printf("%c",c);
		c = fgetc(fptr);
		
	}
	printf("\n");
	fseek(fptr,0,SEEK_SET);
}
void copy_file(FILE *fptr1,FILE *fptr2){
	int c = fgetc(fptr1);
	
	while(c !=EOF){
		fputc(toupper(c),fptr2);//use toupper() to make tham all UPPER
		c = fgetc(fptr1);
	}
	fseek(fptr1,0,SEEK_SET);
	fseek(fptr2,0,SEEK_SET);
}
int findNumberofChar(FILE *fptr){
	int c = fgetc(fptr);
	int tempNumber=0;//return value as a sayac
	while(c !=EOF){
		tempNumber++;
		c = fgetc(fptr);
	}
	fseek(fptr,0,SEEK_SET);
	return (tempNumber-1);//return one less than original value because we don't add EOF value.
}
