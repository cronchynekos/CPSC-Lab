//Nathanael Kim
#include <stdio.h>

extern "C" void display_array(double array[], long index);

void display_array(double array[], long index)
{
    for (long i = 0; i < index; ++i)//loops until every input gets printed
    {
        printf("%1.8f", array[i]);
        printf("%s", " ");
        printf("\n");
    }
}
