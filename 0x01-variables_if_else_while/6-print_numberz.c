#include <stdio.h>

/**
 * main - entry point
 *
 * Descroption:
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	putchar("\n");
	return (0);
}
