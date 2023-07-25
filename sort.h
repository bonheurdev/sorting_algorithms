#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;
void swap(int *a, int *b);
void bubble_sort(int *array, size_t size);
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2);
void insertion_sort_list(listint_t **list);
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void selection_sort(int *array, size_t size);
size_t lomuto_partition(int *array, ssize_t low, ssize_t high, size_t size);
void quicksort(int *array, ssize_t low, ssize_t high, size_t size);
void quick_sort(int *array, size_t size);

#endif /*SORT_H*/
