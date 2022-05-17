#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void rectangle(int length, int width, int height) {
    int baseArea = (length * width);
    int final = (baseArea * height);
    printf("%d", final);
}
void pyramid(int length, int width, int height) {
    int baseArea = length * width;
    int final = (baseArea * height / 3);
    printf("%d", final);
}
void ellipsoid(int length, int width, int height) {
    int volume = (4 * 3.14 * length * width * height / 3);
    printf("%d", volume);
}

int main()
{

    void (*findArea[3])(int, int, int) = { rectangle, pyramid, ellipsoid };


    int length, width, height, choice, result;
    printf("Enter Length, Width and Height:\n");
    scanf("%d", &length);
    scanf("%d", &width);
    scanf("%d", &height);
    printf("Enter which function you would like\n");
    printf("Rectangle(1), pyramid(2), ellipsoid(3):\n");
    scanf("%d", &choice);

    (*findArea[choice-1])(length, width, height);

    return 0;
}