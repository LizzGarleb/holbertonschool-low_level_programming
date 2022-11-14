#include "lists.h"
/**
 * free_list - function that frees a list
 * @head: point to the beginning
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
