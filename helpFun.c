#include "sort.h"
#include <stdio.h>


void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%i  ", arr[i]);
    printf("\n");
}
void swap (int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
