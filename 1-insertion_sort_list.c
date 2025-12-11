#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 *                        in ascending order using the Insertion Sort
 *
 * @list: pointer to the head of the list
 *
 * Description: Sorts a doubly linked list of integers in ascending order.
 *              Nodes must be swapped; the integer values inside nodes
 *              cannot be modified. Prints the list after each swap.
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head;
	listint_t *current;
	listint_t *tmp;
	listint_t *prev_node;
	listint_t *next_node;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	head = *list;
	current = head->next;

	while (current != NULL)
	{
		tmp = current->next;
		prev_node = current->prev;

		while (prev_node != NULL && current->n < prev_node->n)
		{
			next_node = current->next;

			current->prev = prev_node->prev;
			current->next = prev_node;
			prev_node->prev = current;
			prev_node->next = next_node;

			if (next_node != NULL)
				next_node->prev = prev_node;

			if (current->prev != NULL)
				current->prev->next = current;
			else
				*list = current;

			prev_node = current->prev;
			print_list(*list);
		}
		current = tmp;
	}
}
