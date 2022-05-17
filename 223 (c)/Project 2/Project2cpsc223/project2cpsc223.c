//Nathanael Kim CPSC 223-01 Assignment 2
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    const char categories[7][15];//variable to store the categories
    const char contents[10][15];//variable to store the contents of the categories
    int j = 0;//counter

    FILE* fpointer = fopen("sample2.txt", "r");//open the txt file to read


    if (fpointer == NULL) {//error checking
        printf("error!\n");
    }
    else {
        while (!feof(fpointer)) {//reads until end of file
            //this worked better for me than the example
            fscanf(fpointer, "%s", categories[j]);//copies first word in each line to categories array
            fscanf(fpointer, "%[^\n]", contents[j]);//copies each word after the first in each line to contents array
            j++;//counter
        }
    }

    //section for printing the prompt
    printf("Which Token would you like to search the file for?\n");
    for (int i = 0; i < 3; i++) {
        printf("%s %d\n", categories[i], i + 1);
        //printf("%s\n", contents[i]); //used for testing
    }

    //section for getting user input
    int input;
    scanf("%d", &input);
    while (input < 1 || input > 3)//checking for invalid input
    {
        printf("input invalid\n");
        scanf("%d", &input);
    }
    input = input - 1;
    printf("\nDisplaying %s\n", categories[input]);

    //section for printing the contents of user selected category
    for (int i = 0; i < 6; i++)
    {
        if (categories[i] == categories[input]) {
            printf("%s", contents[i]);
        }
    }

    printf(" Orange Blue\n\n");//spacer

    fclose(fpointer);//closing
    return 0;
}

