#include "lists.h"
#include <stdio.h>

/**
 *
 * print_listint - prints all the elements of a list
 *
 * @h: the header of the list
 *
 * Return: always 0
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}
