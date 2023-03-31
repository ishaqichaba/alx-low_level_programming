#include "lists.h"

/**
 * list_len - sprints all the elements of a list_t list.
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;
	const list_t *current;

	current = h;

	while (current)
	{
		current = current->next;
		i++;
	}
	return (i);
}
