#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: consists of bytes
 *
 * Return: number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, nmbr = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				nmbr++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (nmbr);
}
