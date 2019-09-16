#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node in an index
 * @h: head of the list
 * @idx: index
 * @n: value of the new node
 * Return: the addres of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *copy, *temp, *new;
	unsigned int i = 0;

	copy = *h;
	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0 && *h == NULL)
	{
		new->next = copy, *h = new;
		return (*h);
	}
	while (copy != NULL)
	{
		if (idx == 0)
		{
			new->next = *h, copy->prev = new;
			new->prev = NULL, *h = new;
			return (*h);
		}
		if (i == (idx - 1))
		{
			if (copy->next == NULL)
			{
				new->next = NULL, new->prev = copy;
				copy->next = new;
				return (new);
			}
			temp = copy->next, new->next = temp;
			temp->prev = new, new->prev = copy;
			copy->next = new;
			return (new);
		}
		i++;
		copy = copy->next;
	}
	return (NULL);
}
