#include "sort.h"

void swap (int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}


void bubble_sort(int *array, size_t size)
{
    bool flag = true; size_t i = 0;size_t j = 0;
    while( i < size - 1)
    {
        j = 0;
        while( j < size - i - 1)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
                flag = false;
                print_array(array, size);
            }
            j++;
        }
        i++;
        if (flag == true)
            break;
    }
}
