#include "lists.h"

/**
 * find_listint_loop - find loop in linked list
 * @head: pointer to head pointer of linked list
 * Return: address of node where loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x;/*Slow iteration node*/
	listint_t *y;/*Fast iteration node*/

	/* determine if loop exists by seeing if x and y meet */
	/* start them at head, move x one node and y two nodes */
	x = y = head;

	while (x != NULL && y != NULL)
	{
		x = x->next;
		y = y->next->next;

		if (x == y)
		{
			/* start x at head and y at address they met */
			/* move x and y one node to find loop origin */
			x = head;
			while (x != y)
			{
				x = x->next;
				y = y->next;
			}
			return (x);
		}
	}

	return (NULL);
}
