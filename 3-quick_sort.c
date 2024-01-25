#include "sort.h"
/**
*_swap - the positions of two elements into an array
*@array: array
*@item1: array element
*@item2: array element
*/
void _swap(int *array, ssize_t item1, ssize_t item2)
{
int tmp;

tmp = array[item1];
array[item1] = array[item2];
array[item2] = tmp;
}
/**
 *partition - partition sorting scheme implementation
 *@array: array
 *@first: first array element
 *@last: last array element
 *@size: size array
 *Return: return the position of the last element sorted
 */
int partition(int *array, ssize_t first, ssize_t last, size_t size)
{
int pivot = array[last];
ssize_t current = first, finder;

for (finder = first; finder < last; finder++)
{
if (array[finder] < pivot)
{
if (array[current] != array[finder])
{
_swap(array, current, finder);
print_array(array, size);
}
current++;
}
}
if (array[current] != array[last])
{
_swap(array, current, last);
print_array(array, size);
}
return (current);
}
/**
 *quicksort - qucksort algorithm implementation
 *@array: array
 *@first: first array element
 *@last: last array element
 *@size: array size
 */
void quicksort(int *array, ssize_t first, ssize_t last, int size)
{
ssize_t position = 0;

if (first < last)
{
position = partition(array, first, last, size);

quicksort(array, first, position - 1, size);
quicksort(array, position + 1, last, size);
}
}
/**
 *quick_sort - prepare the terrain to quicksort algorithm
 *@array: array
 *@size: array size
 */
void quick_sort(int *array, size_t size)
{
if (!array || size < 2)
return;
quicksort(array, 0, size - 1, size);
}
