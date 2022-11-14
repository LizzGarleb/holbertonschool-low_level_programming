#include "lists.h"
/**
 * listint_len - function that returns the number of elementes
 * in a linked list
 * @h: point to the start
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count += 1;
	}
	return (count);
}
