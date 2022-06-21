#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: String to search
 * @needle: Substring to locate
 *
 * Return: a pointer to the beginning of the substring its located
 *         NULL if the substring is not located
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;

	for (a = 0; haystack[a] > '\0'; a++)
	{
		for (b = a; haystack[b] > '\0' && needle[b - a] > '\0'; b++)
		{
			if (haystack[b] != needle[b - a])
			{
				break;
			}
		}
		if (needle[b - a] == '\0')
		{
			return (haystack + a);
		}
	}
	return (0);
}
