#include "lists.h"
/**
 * free_litsint - function that frees a list
 * @head: point to the start
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
