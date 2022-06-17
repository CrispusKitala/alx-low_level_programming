#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: Buffer to print
 * @size: size bytes
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int y, j, i;

	y = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (y < size)
	{
		j = size - y < 10 ? size - y : 10;
		printf("%08x: ", y);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + y + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + y + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		y += 10;
	}
}
