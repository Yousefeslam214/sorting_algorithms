#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort
 *
 * @array: an array of integers to be sorted
 * @size: is the size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx, temp, swapped;

	for (i = 0; i < size; i++)
	{
		swapped = 0;
		min_idx = i;

		for (j = i; j < size; j++)
		{
			if (array[min_idx] > array[j])
			{
				min_idx = j;
				swapped = 1;
			}
		}

		temp = array[i];
		array[i] = array[min_idx];
		array[min_idx] = temp;

		if (swapped == 1)
			print_array(array, size);
	}
}
