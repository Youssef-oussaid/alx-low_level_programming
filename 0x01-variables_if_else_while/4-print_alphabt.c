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
	char alph = 'a';

	while (alph <= 'z')
	{
		if (alph == 'q' || alph == 'e')
			alph++;
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
