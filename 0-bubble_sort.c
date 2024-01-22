#include "sort.h"

/**
 * swap - function to swap two integers in an array.
 * @x: first integer
 * @y: second integer
 */
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * bubble_sort - function to implement the bubble sort algorithm on an array.
 * @array: array to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
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
				swap(&array[j], &array[j + 1]);
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
