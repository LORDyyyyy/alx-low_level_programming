#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: head
 * @str: the string to add at the end
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *tmp = *head;

	if (!new || !head)
		return (NULL);
	if (str)
	{
		new->str = strdup(str);
		new->len = _strlen(str);
		new->next = NULL;
	}
	else
		return (NULL);
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
		*head = new;
	return (new);
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
