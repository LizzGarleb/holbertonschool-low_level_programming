#include "lists.h"
/**
 * pop_listint - function that deletes the head node of
 * a linked list
 * @head: point to the start of the link
 * Return: the head node data, return 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}
	else
	{
		tmp = *head;
		*head = (*head)->next;
		data = tmp->n;
		free(tmp);
	}
	return (data);
}
