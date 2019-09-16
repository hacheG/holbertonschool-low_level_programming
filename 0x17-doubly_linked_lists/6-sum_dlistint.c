#include "lists.h"
/**
 * sum_dlistint - print de sum of all the datas in a list
 * @head: head of the list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (0);
	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		count = count + head->n;
		head = head->next;
	}
	return (count);
}
