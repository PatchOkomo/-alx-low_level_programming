#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: head of the dlistint_t list
 * @n: integer that new node will contain
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *i;

	i = malloc(sizeof(dlistint_t));
	if (i == NULL)
		return (NULL);

	i->n = n;
	i->prev = NULL;
	i->next = *head;
	if (*head != NULL)
		(*head)->prev = i;
	*head = i;

	return (i);
}
