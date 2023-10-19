#include "lists.h"

/**
 * print_listint - print the int data
 * @h: the head pointer to the list
 * Return: The number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
