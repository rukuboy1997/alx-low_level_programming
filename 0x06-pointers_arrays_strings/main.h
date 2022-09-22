#ifndef _MAIN_
#define _MAIN_

/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */

int _putchar(char c);

/**
 * _strcat - concats strings
 * @dest: destination of string
 * @src: source of string to concat
 *
 * Return: returns char value
 */

char *_strcat(char *dest, char *src);

/**
 * _strncat - concat string at n times
 * @dest: destination source
 * @src: source of array
 * @n: n amount of times
 * Return: return char value
 */

char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - function to copy
 * @dest: destination to copy
 * @src: source to copy
 * @n: times to copy
 * Return: return char value
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compares strings
 *
 * @s1: first string
 * @s2: second string to compare
 * Return: int value
 */

int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverses an array
 * @a: array to reverse
 * @n: how many elements
 */

void reverse_array(int *a, int n);

/**
 * string_toupper - makes lower to upper
 * @s: character to make upper
 * Return: character value
 */

char *string_toupper(char *s);

/**
 * cap_string - string to capitalize;
 * @s: string to capitalize
 * Return: return the string
 */

char *cap_string(char *s);

/**
 * leet - switches characters to 1337
 * @s: string to switch
 *
 * Return: returns character
 */

char *leet(char *s);

char *rot13(char *);

void print_number(int n);

char *infinite_add(char *n1, char *n2, char *r, int size_r);

void print_buffer(char *b, int size);

#endif
