#include "lists.h"

/**
 * print_dlistint - Write a function that prints all the elements
 * of a dlistint_t list
 *
 * @h: pointer
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; h = h->next, count++)
	{
		printf("%d\n", h->n);
	}
	return (count);
}
