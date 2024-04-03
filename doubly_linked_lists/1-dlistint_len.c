#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * in a linked list_t list.
 *
 * @h: pointer
 *
 * Return: count
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; h = h->next, count++)
		;
	return (count);
}
