#include "lists.h"

/**
 * free_listint - frees a list
 * @head: singly ......
 *
 * ReturnL void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
