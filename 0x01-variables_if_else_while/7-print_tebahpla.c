#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
		{
		putchar(alpha);
		alpha--;
		}
	putchar('\n');
	return (0);

}
