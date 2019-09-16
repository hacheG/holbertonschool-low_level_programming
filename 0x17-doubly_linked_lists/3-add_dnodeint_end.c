#include "lists.h"
/**
 * add_dnodeint_end - add a new node at the end
 * @head: head of the list
 * @n: value of the new node
 * Return: the addres of tthe new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (last->next != NULL)
			last = last->next;
		new_node->prev = last;
		last->next = new_node;
	}
	return (new_node);
}
