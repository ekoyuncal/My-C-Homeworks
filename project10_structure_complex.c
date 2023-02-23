#include <stdio.h>
#include <math.h>
struct Complex
{
	float real;
	float imag;
};
typedef struct Complex Complex;
Complex add(Complex n1,Complex n2);
void Print(Complex n);
float Abs(Complex n);

//This part is my addition
void multiple(Complex *n,int x);
void division(Complex *n, int x);
float realReturn(Complex n);
float imagReturn(Complex n);



int main()
{
	Complex n1, n2, n3, temp;
	printf("For 1st complex number \n");
	printf("Enter real and imaginary part respectively:\n");
	scanf("%f %f", &n1.real, &n1.imag);
	Print(n1);
	printf("\nFor 2nd complex number \n");
	printf("Enter real and imaginary part respectively:\n");
	scanf("%f %f", &n2.real, &n2.imag);
	Print(n2);
	printf("\nFor 3nd complex number \n");
	printf("Enter real and imaginary part respectively:\n");
	scanf("%f %f", &n3.real, &n3.imag);
	Print(n3);
	temp = add(n1, n2);
	printf("Sum = ");
	Print(temp);
	printf("Absolute value of the sum = %f\n", Abs(temp));
	
	//We take pointer to use their address and change their value
	multiple(&n3,2);
	Print(n3);
	division(&n3,2);
	Print(n3);
	
	printf("%.2f\n",realReturn(n3));
	printf("%.2fi\n",imagReturn(n3));
	return 0;
}
Complex add(Complex n1, Complex n2){
	
	
	Complex temp;
	temp.real = n1.real+n2.real;
	temp.imag = n1.imag+n2.imag;
	return(temp);
}
void Print (Complex n){
	
	printf("%.1f + %.1fi\n", n.real, n.imag);
}
float Abs(Complex n){
	
	return sqrt( pow(n.real,2) + pow(n.imag,2) );
}
void multiple(Complex *n,int x){
	(*n).real=((*n).real)*x;//we multiply it with using x
	(*n).imag=((*n).imag)*x;
}
void division(Complex *n,int x){
	(*n).real=((*n).real)/x;//we divide it with using x
	(*n).imag=((*n).imag)/x;
}
float realReturn(Complex n){//return real part as a float
	return n.real;
}
float imagReturn(Complex n){//return imag part as a float
	return n.imag;
}
