#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
};

int main()
{
    struct node* start, * list;

    start = (struct node*)malloc(sizeof(struct node));
    list = start;
    start->next = NULL;

    int count, input, i;
    printf("How many numbers are in the list?\n");
    scanf("%d", &count);

    for (i = 0; i < count; i++)
    {
        printf("Enter the data of node %d: ", i);
        scanf("%d", &input);
        list->data = input;
        list->next = (struct node*)malloc(sizeof(struct node));
        list = list->next;
    }

    list->next = NULL;

    while (start != NULL)
    {
        printf("%d\n", start->data);
        start = start->next;
    }

    free(start);
    free(list);
    return 0;
}

