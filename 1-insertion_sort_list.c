#include "sort.h"

/**
 * insertion_sort_list - Sorts doubly linked list of integers in ascending
 * order using the Inserion sort algorithm using insertion sort algorithm
 * @list: pointer to the head of the list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr = (*list)->next;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	while (curr != NULL)
	{
		listint_t *temp = curr->prev;

		while (temp != NULL && temp->n > curr->n)
		{
			/* swap nodes */
			if (temp->prev != NULL)
				temp->prev->next = curr;
			else
				*list = curr;

			curr->prev = temp->prev;
			temp->prev = curr;
			temp->next = curr->next;
			if (curr->next != NULL)
				curr->next->prev = temp;
			curr->next = temp;

			/* print list after each swap */
			print_list(*list);

			temp = curr->prev;
		}
		curr = curr->next;
	}
}
