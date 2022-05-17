#include <stdio.h>
int main()
{
	int length; // holds length
	int width; // holds width
	int area; // holds area
	int* lengthPtr; // int pointer which will be set to point to length
	int* widthPtr; // int pointer which will be set to point to width
	printf("Please input the length of the rectangle\n");
	scanf("%d", &length);
	printf("Please input the width of the rectangle\n");
	scanf("%d", &width);
	lengthPtr = &length;
	widthPtr = &width;
	// Fill in code to make lengthPtr point to length (hold its address)
	// Fill in code to make widthPtr point to width (hold its address)
	area = *lengthPtr * *widthPtr;
		// Fill in code to find the area by using only the pointer variables
		printf("The area is %d\n", area);
	if (*lengthPtr > *widthPtr)
		// Fill in the condition length > width by using only the pointer variables)
		printf("The length is greater than the width\n");
	else if (*widthPtr > *lengthPtr)
		// Fill in the condition of width > length by using only the pointer variables)
		printf("The width is greater than the length\n");
	else
		printf("The width and length are the same\n");
		return 0;
}