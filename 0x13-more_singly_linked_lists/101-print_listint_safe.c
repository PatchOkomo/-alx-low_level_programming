#include "lists.h"

/**
 * print_listint_safe - prints linked list listint_t
 * @head: pointer to head pointer of linked list
 * Return: number of unique nodes in list before a loop
 */

int count_nodes_till_loop(const listint_t *head)
{
	int i = 0;
	const listint_t *t1, *t2;

	t1 = t2 = head;

	while (t1 != NULL && t2 != NULL)
	{
		t1 = t1->next;
		t2 = t2->next->next;
		i++;

		if (t1 == t2)
		{
			t1 = head;
			while (t1 != t2)
			{
				t1 = t1->next;
				t2 = t2->next;
				i++;
			}
			return (i);
		}
	}
	return (0);
}

/**
 * findloop - find if there's a loop in linked list
 * @head: pointer to head pointer of linked list
 * Return: 0 if no loop, 1 if loop
 */
int findloop(const listint_t *head)
{
	const listint_t *t1, *t2;

	t1 = t2 = head;

	while (t1 != NULL && t2 != NULL)
	{
		t1 = t1->next;
		t2 = t2->next->next;

		if (t1 == t2)
			return (1);
	}
	return (0);
}

/**
 * print_listint_safe - prints list with addresses
 * @head: pointer to head pointer of linked list
 * Return: number of nodes in list, exit(98) if failed
 */
size_t print_listint_safe(const listint_t *head)
{
	int i = 0;
	int loop_found;
	size_t num_nodes = 0;
	const listint_t *tmp;

	if (head == NULL)
		exit(98);

	loop_found = findloop(head);

	if (loop_found == 1) /* print upto last node before loop if loop */
	{
		i = count_nodes_till_loop(head);
		for (loop_found = 0; loop_found < i; loop_found++)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			num_nodes += 1;
			tmp = tmp->next;
		}
	}
	else if (loop_found == 0) /* print regularly upto NULL if no loop */
	{
		tmp = head;
		while (tmp != NULL)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			num_nodes += 1;
			tmp = tmp->next;
		}
	}

	return (num_nodes);
}
