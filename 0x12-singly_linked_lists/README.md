ls
cat> #include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements in linked lists
 * @h: pointer to the start of the linked list
 *
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (i);
}
rm #include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements in linked lists
 * @h: pointer to the start of the linked list
 *
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (i);
}
vim lists.h
vim lists.h
