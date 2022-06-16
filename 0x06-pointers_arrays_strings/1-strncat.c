#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: String to be appended to
 * @src: String to append
 * @n: Maximum bytes from src
 *
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
