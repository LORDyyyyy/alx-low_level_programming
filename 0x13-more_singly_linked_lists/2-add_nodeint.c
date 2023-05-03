#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: singly linked list
 * @n: the value to add to the first node
 *
 * Return: the new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!head || !new)
		return (NULL);

	new->n = n;
	new->next = *head ? *head : NULL;
	*head = new;
	return (new);
}
