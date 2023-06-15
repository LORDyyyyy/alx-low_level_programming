#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: doubly linked list
 * @n: data
 *
 * Return: dlistint_t list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t)), *h = *head;

	if (!temp)
		return (NULL);

	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;

	if (h)
		while (h->prev)
			h = h->prev;
	temp->next = h;
	if (h)
		h->prev = temp;

	*head = temp;
	return (temp);
}
