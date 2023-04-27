#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list_t list
 * @head: head
 * @str: the string to add to the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!head || !new)
		return (NULL);
	if (str)
	{
		new->str = strdup(str);
		new->len = _strlen(str);
	}
	else
		return (NULL);
	new->next = *head;
	*head = new;
	return (new->str ? new : NULL);
}

/**
 * _strlen - string length
 * @str: string
 *
 * Return: the len of str
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (str[len])
		len++;
	return (len);
}
