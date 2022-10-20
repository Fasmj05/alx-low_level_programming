#include <stdio.h>
#include "lists.h"
/**
*print_list - print string and length of string for each element of 'h'
*@h: pointer to first element of list
*Return: length of list
*/
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%u] (nil)\n", h->len);
			h = h->next;
			++size;
			continue;
		}
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		++size;
	}
	return (size);
}}
