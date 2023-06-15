#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: the head of a linked list
 * @index: wanted index
 *
 * Return: the node, if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t len = dlistint_len(head);
	unsigned int count = 0;
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (index >= len)
		return (NULL);

	if (!head)
		return (NULL);

	while (head->prev)
		head = head->prev;

	while ((tmp = head))
	{
		if (index == count)
			return (tmp);
		head = head->next;
		count++;
	}
	return (NULL);
}


/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list
 * @h: the head of a d linked list
 *
 * Return: @h size
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (!h)
		return (0);
	while (h->prev)
		h = h->prev;
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
