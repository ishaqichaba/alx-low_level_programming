#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of a list.
 * @str: string to add to list.
 *
 * Return: pointer to the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int str_len;

	new = malloc(sizeof(list_t));

	str_len = 0;
	while (str[str_len])
		str_len++;

	new->str = strdup(str);
	new->len = str_len;
	new->next = *head;
	*head  = new;

	return (new);
}
