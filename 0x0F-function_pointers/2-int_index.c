#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: The array
 * @size: The number of elements in the array
 * @cmp: a pointer to tge function to be used to compare variables
 * Return: 0 or -1 depending on condition
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x, i;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			x = cmp(array[i]);
			if (x)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
