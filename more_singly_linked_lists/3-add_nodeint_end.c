#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end of a list
 * @head: point to the start
 * @n: the number to add
 * Return: the address of the new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *adding, *last;

	adding = malloc(sizeof(listint_t));

	if (adding == NULL)
		return (NULL);

	adding->n = n;
	adding->next = NULL;

	if (*head == NULL)
	{
		*head = adding;
		return (adding);
	}

	last = *head;

	while (last->next != NULL)
		last = last->next;

	last->next = adding;

	return (adding);
}
