#include "main.h"
/**
 * _strlen - returns length of a string.
 * @s: input str.
 * Return: length of string..
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
