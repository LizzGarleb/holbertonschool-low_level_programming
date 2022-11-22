#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the nodes at index
 * of a linked list
 * @head: points to the start of the list
 * @index: position to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node, *prev_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	current_node = *head;
	if (index == 0)
	{
		*head = current_node->next;
		if (current_node->next != NULL)
			current_node->next->prev = NULL;
		free(current_node);
		return (1);
	}
	while (current_node != NULL && i < index -1)
	{
		if (current_node == NULL || current_node->next == NULL)
			return (-1);

		current_node = current_node->next;
		i++;
	}
	prev_node = current_node->next->next;
	if (current_node->next->next != NULL)
		current_node->next->next->prev = current_node;
	free(current_node->next);
	current_node->next = prev_node;
	return (1);
}
