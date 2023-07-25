#include "sort.h"

/**
 * swap_nodes - Swaps two nodes in a doubly linked list.
 * @list: Pointer to the head of the doubly linked list.
 * @node1: First node to swap.
 * @node2: Second node to swap.
 */
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
if (node1->prev != NULL)
node1->prev->next = node2;
if (node2->next != NULL)
node2->next->prev = node1;

node1->next = node2->next;
node2->prev = node1->prev;
node1->prev = node2;
node2->next = node1;

if (node2->prev == NULL)
*list = node2;

print_list(*list);
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm.
 * @list: Pointer to a pointer to the head of the doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current, *key, *prev;
if (!list || !(*list) || !(*list)->next)
        return;

current = (*list)->next;
while (current != NULL)
{
key = current;
prev = current->prev;

while (prev != NULL && key->n < prev->n)
{
swap_nodes(list, prev, key);
prev = key->prev;
}

current = current->next;
}
}
