#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the
 * beginnings of a list
 * @head: points to the start
 * @n: point to the number
 * Return: the address of the new elements, or NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *adding;

	adding = malloc(sizeof(listint_t));

	if (adding == NULL)
		return (NULL);

	adding->n = n;
	adding->next = *head;
	*head = adding;

	return (adding);
}
