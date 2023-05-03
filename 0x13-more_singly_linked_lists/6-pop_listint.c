#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * and returns the head node's data (n)
 * @head: singly linked list
 *
 * Return: if empty, 0
 */
int pop_listint(listint_t **head)
{
	listint_t *newHEAD;
	int n;

	if (!head || !*head)
		return (0);

	newHEAD = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = newHEAD;
	return (n);
}
