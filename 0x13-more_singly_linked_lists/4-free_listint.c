#include "lists.h"
/**
 * free_listint - Frees a list of nodes
 * @head: Pointer to the first element of the list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
