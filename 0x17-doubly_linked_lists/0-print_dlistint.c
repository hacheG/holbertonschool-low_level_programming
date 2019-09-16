#include "lists.h"
/**
 * print_dlistint - print a list
 * @h: Is the head
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while ((*h).prev != NULL)
		h = (*h).prev;
	while (h != NULL)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
		count++;
	}
	return (count);
}
