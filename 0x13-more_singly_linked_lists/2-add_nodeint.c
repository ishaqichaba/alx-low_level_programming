#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the pointer to the head of the list
 * @n: integer value to add to the list
 * Return: pointer to the new head of the list
 */
listint_t *add_nodeint(listint_t **head, int n)
