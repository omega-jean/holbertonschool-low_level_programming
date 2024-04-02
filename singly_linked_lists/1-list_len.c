#include "lists.h"

/**
 * print_len - Function that returns the number of elements in a linked
 *
 * @h: Pointer to the head of the list.
 *
 * Return: ...
 */

size_t list_len(const list_t *h)
{
	const list_t *current;
	size_t count;

	current = h;
	for (count = 0; current != NULL; current = current->next, count++)
		;
	return (count);
}
