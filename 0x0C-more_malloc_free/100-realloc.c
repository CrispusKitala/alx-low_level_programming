#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: Pointer
 * @old_size: old allocated size
 * @new_size: new size to allocate
 *
 * Return: Pointer to newly allocated memory, otherwise null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *np, *relloc;
	unsigned int index;

	if (ptr != NULL)
		np = ptr;
	else
	{ return (malloc(new_size)); }
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{ free(ptr);
		return (0); }
	relloc = malloc(new_size);
	if (relloc == NULL)
		return (0);
	for (index = 0; index < (old_size || index < new_size); index++)
	{
		*(relloc + index) = np[index];
	}
	free(ptr);
	return (relloc);
}
