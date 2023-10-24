#include "main.h"

/**
 * _strstr - function
 * @haystack: an array
 * @needle: an array
 * Return: a pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *p = NULL;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (needle[j] == haystack[i] &&
			needle[j + 1] == haystack[i + 1] &&
			needle[j + 2] == haystack[i + 2] &&
			needle[j + 3] == haystack[i + 3] &&
			needle[j + 4] == haystack[i + 4])
			{
				p = &haystack[i];
				return (p);
			}
		j++;
		}
	i++;
	}
	return (p);
}
