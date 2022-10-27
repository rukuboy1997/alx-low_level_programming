#include <stdio.h>

/**
 * get_endianness - retunrs the endian of the processor
 *
 * Return: 1 for little and 0 for big
 */

int get_endianness(void)
{
	char num;
	char *ptr;

	num = '1';
	ptr = &num;
	if (*ptr == 0)
		return (0);
	else
		return (1);
}
