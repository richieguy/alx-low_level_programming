#include "lists.h"

/**
 * listint_len - return the number of element in
 * a linked list.
 * @h: head of a list.
 *
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h ! = NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nnodes);
	
