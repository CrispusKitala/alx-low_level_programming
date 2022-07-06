#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * that is given as a parameter on each element of an array
 * @array: input array
 * @size: Size of array
 * @action: Pointer to the function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
