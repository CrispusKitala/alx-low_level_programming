#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: Destination
 * @src: Memory area to copy bytes from
 * @n: number of bytes to copy from src
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];

	return (dest);
}
