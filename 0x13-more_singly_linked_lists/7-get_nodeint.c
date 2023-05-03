#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: singly .......
 * @index: index
 *
 * Return: nth node of head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int n;

	while (tmp && n < index)
	{
		tmp = tmp->next;
		n++;
	}
	return (tmp);
}
