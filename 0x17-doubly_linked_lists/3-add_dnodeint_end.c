#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: the list
 * @n: data to add
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t)), *h = *head;

	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;

	if (h)
	{
		while (h->next)
			h = h->next;
		h->next = temp;
	}
	else
		*head = temp;
	temp->prev = h;

	return (temp);
}
