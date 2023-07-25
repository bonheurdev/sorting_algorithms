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
 * lomuto_partition - Lomuto partition scheme for Quick Sort.
 * @array: The array to be partitioned.
 * @low: The lower index of the partition.
 * @high: The higher index of the partition.
 * @size: Number of elements in the array.
 *
 * Return: The index of the pivot element.
 */
size_t lomuto_partition(int *array, ssize_t low, ssize_t high, size_t size)
{
int pivot = array[high];
ssize_t i = low - 1;
ssize_t j;

for (j = low; j <= high - 1; j++)
{
if (array[j] <= pivot)
{
i++;
if (i != j)
{
swap(&array[i], &array[j]);
print_array(array, size);
}
}
}

if ((i + 1) != high)
{
swap(&array[i + 1], &array[high]);
print_array(array, size);
}

return (i + 1);
}

/**
 * quicksort - Recursive function to perform Quick Sort.
 * @array: The array to be sorted.
 * @low: The lower index of the partition.
 * @high: The higher index of the partition.
 * @size: Number of elements in the array.
 */
void quicksort(int *array, ssize_t low, ssize_t high, size_t size)
{
size_t pivot;
if (low < high)
{
pivot = lomuto_partition(array, low, high, size);

quicksort(array, low, pivot - 1, size);
quicksort(array, pivot + 1, high, size);
}
}

/**
 * quick_sort - Sorts an array of integers in ascending order
 * using the Quick Sort algorithm (Lomuto partition).
 * @array: The array to be sorted.
 * @size: Number of elements in the array.
 */
void quick_sort(int *array, size_t size)
{
if (!array || size <= 1)
return;

quicksort(array, 0, size - 1, size);
}
