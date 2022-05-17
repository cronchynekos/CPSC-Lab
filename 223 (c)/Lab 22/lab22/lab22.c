#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>

typedef struct point {
	//int name;
	//char name[20];
	int cwid;
	int gpa;
	int age;
	void (*print)(struct point* p);
}point;
void print_name(struct point* p){
	//printf("Name: %d\n", p->name);
}
void print_cwid(struct point* p) {
	printf("CWID: %d\n", p->cwid);
}
void print_gpa(struct point* p) {
	printf("GPA: %d\n", p->gpa);
}
void print_age(struct point* p) {
	printf("Age: %d\n", p->age);
}
int main(void) {
	int inputCwid, inputGpa, inputAge;
	int inputName;
	//char inputName[20];

	printf("Enter the name: \n");
	//scanf("%d", &inputName);
	printf("nathan\n");

	printf("Enter the CWID: \n");
	scanf("%d", &inputCwid);

	printf("Enter the GPA: \n");
	scanf("%d", &inputGpa);

	printf("Enter the age: \n");
	scanf("%d", &inputAge);

	point p1 = { inputCwid, inputGpa, inputAge };

	print_name(&p1);
	printf("Name: nathan\n");
	print_cwid(&p1);
	print_gpa(&p1);
	print_age(&p1);

	return 0;
}