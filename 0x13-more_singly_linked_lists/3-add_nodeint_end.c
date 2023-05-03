#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: singly .......
 * @n: the value to add
 *
 * Return: new list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *tmp;

	if (!head || !new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (!*head)
		*head = new;
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (new);
}
