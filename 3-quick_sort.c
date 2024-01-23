#include "sort.h"

/**
 * swap -used to swap two elements
 *
 * @a: element 1
 * @b: element 2
 */
void swap(int *a, int *b)
{
        int temp = *a;
        *a = *b;
        *b = temp;
}

/**
 * partition - responsible for dividing an array into two parts
 *
 * @arr: the array
 * @low: low index
 * @high: high index
 * @size: size of the array
 * Return: pivot element position
 */
int partition(int arr[], int low, int high, size_t size)
{
        int pivot_index, pivot, k, i;

        pivot_index = low + rand() % (high - low + 1);

        swap(&arr[low], &arr[pivot_index]);

        pivot = arr[low];
        k = high;

        for (i = high; i > low; i--)
        {
                if (arr[i] > pivot)
                {
                        if (arr[i] != arr[k])
                        {
                                swap(&arr[i], &arr[k--]);
                        }
                }
        }
        if (arr[i] != arr[high])
        {
                swap(&arr[low], &arr[k]);
                print_array(arr, size);
        }
        return (k);
}

/**
* quicksort - sorts an array of integers in ascending order
* using the Quick sort
*
* @arr: array of integers to be sorted
* @low: low index
* @high: high index
* @size: size of the array
*/
void quicksort(int arr[], size_t low, size_t high, int size)
{
        int idx;

        if (low < high)
        {
                idx = partition(arr, low, high, size);

                quicksort(arr, low, idx - 1, size);
                quicksort(arr, idx + 1, high, size);
        }
}

/**
* quick_sort - sorts an array of integers in ascending order
* using the Quick sort
*
* @array: array of integers to be sorted
* @size: size of the array
*/
void quick_sort(int *array, size_t size)
{
        if (!array || size < 2)
                return;
        quicksort(array, 0, size - 1, size);
}
