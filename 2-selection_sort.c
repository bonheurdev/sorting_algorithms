#include "sort.h"

/**
 * swap - Swaps two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the Selection sort algorithm.
 * @array: The array to be sorted.
 * @size: Number of elements in the array.
 */
void selection_sort(int *array, size_t size)
{
size_t i, j;
size_t min;
size_t swapped = 0;

if (!array || size <= 1)
return;

for (i = 0; i < size; i++)
{
min = i;
swapped = 0;

for (j = i + 1; j < size; j++)
{
if (array[j] < array[min])
{
min = j;
swapped = 1;
}
}

if (swapped == 1)
{
swap(&array[i], &array[min]);
print_array(array, size);
}
}
}
