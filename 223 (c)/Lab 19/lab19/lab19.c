#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


typedef struct point {
    int x;
    int y;
}point;

typedef struct rect {
    point pt1; //bottom left
    point pt2; //top right
}rect;


int main()
{
    struct rect screen2 = { {10, 20}, {30, 40} };

    printf("Enter four points\n");

    scanf("%d", &screen2.pt1.x);
    scanf("%d", &screen2.pt1.y);
    scanf("%d", &screen2.pt2.x);
    scanf("%d", &screen2.pt2.y);

    printf("Enter two points to test if they lie within (%d, %d) and (%d, %d)\n", screen2.pt1.x, screen2.pt1.y, screen2.pt2.x, screen2.pt2.y);

    int choicex, choicey;

    scanf("%d", &choicex);
    scanf("%d", &choicey);
    
    int length, width, area, perimeter;

    length = abs(screen2.pt1.x - screen2.pt2.x);
    width = abs(screen2.pt1.y - screen2.pt2.y);
    
    if (abs(choicex - screen2.pt1.x) > length || abs(choicex - screen2.pt2.x) > length || abs(choicey - screen2.pt1.y) > width || abs(choicey - screen2.pt2.y) > width) {
        printf("Your point lies outside of the rectangle\n");
    }
    else {
        printf("Your point lies within the rectangle\n");
    }

    perimeter = (2 * length) + (2 * width);
    area = length * width;
    printf("The perimeter of the rectangle is %d.\n The area of the rectangle is %d", perimeter, area);

    return 0;
}