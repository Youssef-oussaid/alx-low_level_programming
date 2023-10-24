#include "main.h"

/**
 * _strstr - function
 * @haystack: an array
 * @needle: an array
 * Return: a pointer
 */

char *_strstr(char *haystack, char *needle)
{
	for (;*haystack != '\0'; haystack++)
	{
		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
