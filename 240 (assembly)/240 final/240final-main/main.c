
#include <stdio.h>
#include <stdint.h>

extern double _control();
extern double _fill();
extern double _sum();

int main(int argc, char* argv[]){
double answer = 0.0;
	printf("======================================================\n");//opening prompt
	printf("Welcome to Sum of an Array Calculator by Nathanael Kim\n");

	answer = _control();//calls to asm file

	printf("The Main received %5.8lf and decided to keep it.\n", answer);//ending prompt
  printf("Thank you for using High Speed Array Software.\n");
  printf("For system support contact Nathanael Kim at nathan.kim@csu.fullerton.edu.\n");
	printf("Main will return 0 to the operating system.\n");
	return 0;
}
