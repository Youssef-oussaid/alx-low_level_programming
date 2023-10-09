#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints a sequence of characters using a loop
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int al = 0;

	while (al <= 9)
	{
		putchar(al + 48);
		if (al != 9)
		{
			putchar(',');
			putchar(' ');
		}
		al++;
	}
	putchar('\n');
	return (0);
}
