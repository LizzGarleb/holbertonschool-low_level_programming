#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data
 * Return: if the list is empty return 0, otherwise return the
 * sum of the data.
 * @head: point to the start of the link list
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int i = 0;

	tmp = head;
	if (!tmp)
		return (0);

	while (tmp)
	{
		i += tmp->n;
		tmp = tmp->next;
	}
	return (i);
}
