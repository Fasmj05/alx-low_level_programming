#include "main.h"
/**
 * _memset - sets memory to array
 * @s: array to set
 * @b: value to set it as
 * @n: n amount of times
 * Return: char value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0;:%s/\s\+$//e i < n; i++)
	{:%s/^\s\+//e
		s[i] = b;
	}
	return (s);
}
