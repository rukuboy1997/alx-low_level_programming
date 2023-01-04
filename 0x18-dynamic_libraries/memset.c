#include "main.h"

/**
 * _memset - fills memory with a constant byte .
 * @s: allocated memory - array of characters .
 * @b: char bytes .
 * @n: number of spaces to fill .
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int w;

	for (w = 0; w < n; w++)
	{
		*(s + w) = b;
	}
	return (s);
}
