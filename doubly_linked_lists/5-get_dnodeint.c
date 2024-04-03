#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of
 * a dlistint_t linked list.
 *
 * @head: Pointer
 * @index: ...
 *
 * Return: ...
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL && i < index; i++)
	{
		head = head->next;
	}

	if (head == NULL)
	{
			return (NULL);
	}
	else
	{
		return (head);
	}
}
