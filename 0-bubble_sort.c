#include "sort.h"

/**
 * swap - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}

/**
 * bubble_sort - Sorts an array of integers in ascending
 * order using the Bubble Sort algorithm.
 * @array: The array to be sorted.
 * @size: The number of elements in the array.
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j;
size_t swapped = 0;

if (size <= 1)
return;

for (i = 0; i < size - 1; i++)
{
swapped = 0;
for (j = 0; j < size - 1; j++)
{
if (array[j] > array[j + 1])
{
swap(&array[j], &array[j + 1]);
swapped = 1;
print_array(array, size);
}
}
if (swapped == 0)
break;
}
}
