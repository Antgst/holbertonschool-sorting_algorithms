#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending order 
 * using the insertion sort algoritm
 * @list: pointer to a pointer to the head of the list
 * 
 * Return: Print the list after each swap
 */

void insertion_sort_list(listint_t **list)
{
	if (list == NULL || *list == NULL || *list->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		next = current->next;

		while (current->prev != NULL && current->prev->n > current->n)
		{
			prev = current->prev;

			prev->next = current->next;

			if (current->next != NULL)
				current->next->prev = prev;

			current->prev = prev->prev;
			current->next = prev;

			if (prev->prev != NULL)
				prev->prev->next = current;

			*list = current;

			prev->prev = current;

			print_list(*list);
		}

		current = next;
	}
}
