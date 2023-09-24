#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm.
 *
 * @list: lists of doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *tem;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (curr = (*list)->next; curr != NULL; curr = curr->next)
	{
		tem = curr;
		while (tem->prev != NULL && tem->n < tem->prev->n)
		{
			tem->prev->next = tem->next;
			if (tem->next != NULL)
				tem->next->prev = tem->prev;
			tem->next = tem->prev;
			tem->prev = tem->prev->prev;
			tem->next->prev = tem;
			if (tem->prev != NULL)
				tem->prev->next = tem;
			else
			    *list = tem;
			print_list(*list);
		}
	}
}
