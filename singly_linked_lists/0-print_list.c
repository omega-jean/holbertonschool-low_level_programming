#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 *
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	const list_t *current;
	size_t count;
	current = h;

	for (count = 0; current != NULL; current = current->next, count++)
	{
	if (current->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", current->len, current->str);
	}
	return (count);
}
