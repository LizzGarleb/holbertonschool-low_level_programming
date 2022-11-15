#include "lists.h"
/**
 * insert_nodeint_at_index - function that insert a new node at a given
 * position.
 * @head: pointer to the start of the list
 * @idx: given position
 * @n: data to give to give to new node
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_Node, *tmp, *tmp2;
	unsigned int i = 0;

	tmp = *head;
	tmp2 = *head;
	new_Node = *head;

	if (!new_Node)
		return (NULL);

	if (idx == 0)
	{
		new_Node = *head;
		*head = new_Node;
		return (new_Node);
	}

	while (i != idx - 1 && tmp != NULL)
	{
		tmp = tmp->next;
		tmp2 = tmp2->next;
		i++;
	}
	if (idx > i)
		return (NULL);

	if (i == idx - 1)
	{
		new_Node->n = n;
		new_Node->next = tmp;
		tmp2->next = new_Node;
		return (new_Node);
	}
	return (NULL);
}
