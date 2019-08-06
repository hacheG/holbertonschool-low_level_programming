#include "lists.h"

/**
 * listint_len - Calculates the length of a list
 * @h: Pointer to the begining of the list
 * Return: Returns the amount of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
		h = h->next;
	return (count);
}
