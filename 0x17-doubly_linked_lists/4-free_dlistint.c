#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (!head)
		return;

	while (head->prev)
		head = head->prev;
	while (tmp = head)
	{
		head = head->next;
		free(tmp);
	}
}
