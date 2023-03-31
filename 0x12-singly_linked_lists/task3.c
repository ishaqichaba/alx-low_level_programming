#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the node
 * @str: the string to add to end of list
 *
 * Return: address to new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int str_len = 0;

	while (str[str_len])
		str_len++;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = str_len;
	new->next = NULL;

	temp = *head;

	if (!temp)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
		temp = temp->next;

	if (temp->next == NULL)
		temp->next = new;

	return (new);
}

