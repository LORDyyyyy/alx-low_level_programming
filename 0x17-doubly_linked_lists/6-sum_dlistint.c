#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list
 * @head: the head of the linked list
 *
 * Return: sum of n, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head || dlistint_len(head) == 0)
		return (0);

	while (head->prev)
		head = head->prev;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
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
