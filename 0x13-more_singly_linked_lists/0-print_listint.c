#include "lists.h"

/**
 * print_listint - that prints all the elements of a listint_t list.
 * @h: pointer
 *
 * Return: int
 */
size_t print_listint(const listint_t *h)
{
	int x = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
