#include "lists.h"
/**
 * dlistint_len - count the nodes in a list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while ((*h).prev != NULL)
		h = (*h).prev;
	while (h != NULL)
	{
		h = (*h).next;
		count++;
	}
	return (count);
}
