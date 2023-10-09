#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a
 *
 * Return: Always 0 (success)
 *
 **/

int main(void)
{
	char alph = 97;
	char alphC = 65;

	while (alph <= 122)
	{
		putchar(alph);
		alph++;
	}
	while (alphC <= 90)
	{
		putchar(alphC);
		alphC++;
	}
		putchar('\n');
	return (0);
}
