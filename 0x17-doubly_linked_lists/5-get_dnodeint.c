#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a list
 * @head: head of the list
 * @index: number of node
 * Return: the node of the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	while (count != index)
	{
		count++;
		temp = temp->next;
	}
	return(temp);
}
