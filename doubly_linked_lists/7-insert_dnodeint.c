#include "lists.h"
/**
 * insert_dnodeint_at_index - function that insert a new node at given position
 * @h: pointer to the start of the list
 * @idx: given position
 * @n: data to give to the new node
 * Return: the addres of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_Node, *tmp, *tmp2, *tmp3;
	unsigned int i = 0, j = 0;

	tmp = *h;
	tmp2 = *h;
	tmp3 = *h;
	new_Node = malloc(sizeof(dlistint_t));
	if (new_Node == NULL)
		return (NULL);
	if (h == NULL)
		return (NULL);
	while (tmp3)
	{
		tmp3 = tmp3->next;
		j++;
	}
	if (idx > j)
		return (NULL);
	new_Node->n = n;
	if (idx == 0)
	{
		new_Node->next = *h;
		if (*h != NULL)
			h->prev = new_Node;
		*h = new_Node;
		return (new_Node);
	}
	while (i != idx - 1 && tmp != NULL)
	{
		tmp = tmp->next;
		tmp2 = tmp2->next;
		i++;
	}
	tmp = tmp->next;
	if (i == idx - 1)
	{
		new_Node->n = n;
		new_Node->next = tmp;
		tmp2->next = new_Node;
		return (new_Node);
	}
	return (NULL);
}
