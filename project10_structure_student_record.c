#include <stdio.h>
#include <stdlib.h>

struct Student{
	char name[30];
	int id;
	float mark;
};

void printStudent(struct Student x);
void recordStudent(struct Student *x);

int main(){
	struct Student student1;

	recordStudent(&student1);
	
	
	
	printStudent(student1);
	
	
	
	return 0;
}
void recordStudent(struct Student *x){
	printf("Please enter the student's information");
	
	printf("\nStudent's name=>");
	gets((*x).name);
	printf("\nStudent's id=>");
	scanf("%d",&(*x).id);
	printf("\nStudent's mark=>");
	scanf("%f",&(*x).mark);
}
void printStudent(struct Student x){
	printf("Name: %s\n",x.name);
	printf("Id: %d\n",x.id);
	printf("Mark: %.2f\n",x.mark);
}



