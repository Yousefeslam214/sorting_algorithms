#include "sort.h"


/**
 * bubble_sort - function to implement the bubble sort algorithm on an array.
 * @array: array to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
    int temp;
    bool flag = true;
    size_t i = 0, j = 0;

    if (array == NULL || size < 2)
        return;
    while (i < size - 1)
    {
        j = 0;
        while (j < size - i - 1)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;


                flag = false;
                /* Print array after each swap */
                print_array(array, size);
            }
            j++;
        }
        i++;

        /* If no swaps occurred, array is already sorted */
        if (flag == true)
            break;
    }
}
