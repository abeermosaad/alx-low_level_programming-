#include "lists.h"
/**
 * insert_dnodeint_at_index -  that inserts a new node at a given position.
 * @h: head
 * @idx: idx
 * @n: n
 * Return: the sum
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int len = 0;

	if (h == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
		return (new_node);

	while (temp)
	{
		len++;
		temp = temp->next;
	}
	temp = *h;
	while (--idx)
	{
		temp = temp->next;
	}

	new_node->prev = temp;
	new_node->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = new_node;
	temp->next = new_node;
	return (new_node);
}
