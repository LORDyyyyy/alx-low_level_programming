#include "lists.h"

/**
 * free_list - t frees a list_t list
 * @head: head
 *
 * Retrun: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (!head)
		return;
	while (head)
	{
		tmp = head;
		free(tmp->str);
		free(tmp);
		head = head->next;
	}
	free(head);
}
