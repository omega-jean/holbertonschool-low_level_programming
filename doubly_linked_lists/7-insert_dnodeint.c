#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new
 * node at a given position
 *
 * @h: pointer
 * @idx: ...
 * @n: ...
 *
 * Return: ...
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
	if (h != NULL)
		(*h)->prev = new_node;
	*h = new_node;
	return (new_node);
	}
	current_node = *h;
	while (current_node != NULL && i < idx - 1)
	{
		current_node = current_node->next;
		i++;
	}
	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current_node->next;
	new_node->prev = current_node;
	if (current_node->next != NULL)
		current_node->next->prev = new_node;
	current_node->next = new_node;
	return (new_node);
}
