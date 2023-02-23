#include <stdio.h>
#include <stdlib.h>

int main(void){

    /*Initially display types and bytes*/
    printf("Type\t\t\t\tBytes\n");
    
    /*Display types and bytes with using sizeof()*/
    
    printf("char\t\t\t\t  %d\n",sizeof(char));
    printf("unsigned char\t\t\t  %d\n",sizeof(unsigned char));
    printf("short\t\t\t\t  %d\n",sizeof(short));
    printf("int\t\t\t\t  %d\n",sizeof(int));
    printf("unsigned\t\t\t  %d\n",sizeof(unsigned));
    printf("long\t\t\t\t  %d\n",sizeof(long));
    printf("unsigned long\t\t\t  %d\n",sizeof(unsigned long));
    printf("long long\t\t\t  %d\n",sizeof(long long));
    printf("unsigned long long\t\t  %d\n",sizeof(unsigned long long));
    printf("float\t\t\t\t  %d\n",sizeof(float));
    printf("double\t\t\t\t  %d\n",sizeof(double));
    printf("long double\t\t\t  %d\n",sizeof(long double));

    return 0;
}

