#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 

int main()
{
	int count, input, total;
	printf("Enter the number of values to be summed: \n");
	scanf("%d", &count);

	int* ptr = (int*)malloc(sizeof(int) * count);

	for (int i = 0; i < count; i++) {
		printf("Enter the value: \n");
		scanf("%d", &input);
		ptr[i] = input;
	}

	total = 0;
	for (int i = 0; i < count; i++) {
		total = total + ptr[i];
	}

	printf("The total sum is: %d\n", total);
	
	int secondInput[3];
	for (int i = 0; i < 3; i++) {
		printf("Enter the value: \n");
		scanf("%d", &secondInput[i]);
	}

	int boolean, counter;//1=true    0=false
	counter = count;//counter tells how many more values to add
	for (int i = 0; i < 3; i++) {
		boolean = 0;
		for (int j = 0; j < count; j++) {
			if (secondInput[i] == ptr[j]) {
				boolean = 1;
				counter++;
			}


		}
		if (boolean == 0) {
			printf("The value %d was not in your original values to be summed\n", secondInput[i]);
			ptr = (int*)realloc(ptr, sizeof(int) * counter);
			ptr[counter] = secondInput[i];
		}
	}


	free(ptr);
	return 0;
}