#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth mode of list
 * @head: point to the start
 * @index: is the index of the node, starting at 0
 * Return: return null if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0, j = 0;

	tmp = head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (index > i)
		return (NULL);
	tmp = head;
	while (j != index)
	{
		tmp = tmp->next;
		j++;
	}
	return (tmp);
}
