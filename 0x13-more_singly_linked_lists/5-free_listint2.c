#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: singly ....
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *tmp;

	if (!head)
		return;
	node = *head;
	while (node)
	{
		tmp = node;
		node = node->next;
		free(tmp);
	}
	*head = NULL;
}
