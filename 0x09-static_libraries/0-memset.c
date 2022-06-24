#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: Memory to fill
 * @b: Constant byte to fill in s
 * @n: number of bytes to fill
 *
 * Return: Pointer to filled memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
