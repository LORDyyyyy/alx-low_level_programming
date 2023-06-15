#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the linked list
 * @n: the data to add
 * @idx: the wanted index to insert the new data
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = NULL, *hh = *h;
	unsigned int count = 1;

	if (!hh || idx >= dlistint_len(hh))
		return (NULL);

	while (hh->prev)
		hh = hh->prev;

	if (idx == 0)
	{
		tmp = add_dnodeint(h, n);
		return (tmp);
	}

	if (idx == dlistint_len(hh) - 1)
	{
		tmp = add_dnodeint_end(h, n);
		return (tmp);
	}

	while (hh)
	{
		if (idx == count)
		{
			tmp = malloc(sizeof(dlistint_t));
			tmp->n = n;
			tmp->next = hh->next;
			tmp->prev = hh;
			hh->next->prev = tmp;
			hh->next = tmp;
			break;
		}
		hh = hh->next;
		count++;
	}
	return (tmp);
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