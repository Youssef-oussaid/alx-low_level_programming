#include "main.h"
/**
 * _isalpha - a function that decides whether
 *		'c' is a letter or not
 * @c: a variable that holds the input
 *
 * Return: returns 1 in 'c' is a letter, otherwise it
 *		returns a 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
			return (1);
	return (0);
}
