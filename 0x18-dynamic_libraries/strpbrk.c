#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: char to check
 * @accept: char to look for
 * Return: char
*/
char *_strpbrk(char *s, char *accept)
{
	int w, t;

	for (w = 0; s[w] != '\0'; w++)
	{
		for (t = 0; accept[t] != '\0'; t++)
		{
			if (s[w] == accept[t])
				return (s + w);
		}
	}
	return (0);
}
