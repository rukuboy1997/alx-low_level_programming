#ifndef _MAIN_
#define _MAIN_

/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */

int _putchar(char c);

/**
 * reset_to_98 - resets variable to 98
 *
 * @n: variable with pointer
 */

void reset_to_98(int *n);

/**
 * swap_int - swapts integer values
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b);

/**
 * _strlen - length of string
 * @s: string
 *
 * Return: returns length
 */

int _strlen(char *s);

/**
 * _puts - prints something with new line
 *
 * @str: string to put
 */

void _puts(char *str);

/**
 * _rev - reverse a string
 *
 * @s: string to reverse
 */

void print_rev(char *s);

/**
 * rev_string - reverses value of string
 *
 *
 * @s: string to reverse
 */

void rev_string(char *s);

/**
 * puts2 - puts things twice
 *
 * @str: string to put twice
 */

void puts2(char *str);

/**
 * puts_half - puts half
 *
 * @str: string to put half
 */

void puts_half(char *str);

/**
 * print_ array - prints array
 * @a: array
 * @n: number of elements
 *
 */

void print_array(int *a, int n);

/**
 * _strcpy - main function
 * @dest: destination
 * @src: source
 * Return: return value
 */

char *_strcpy(char *dest, char *src);

/**
 * _atoi - convert char to int
 * @s: string
 * Return: returns a value
 */

int _atoi(char *s);

#endif
