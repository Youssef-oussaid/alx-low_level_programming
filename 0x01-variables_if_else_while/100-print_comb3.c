#include <stdio.h>

/**
 * main - entry point.
 *
 * Return: returns 0.
 */

int main(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			if (i != j && i < j)
			{
				putchar(i + 48);
				putchar(j + 48);                
				if (i + j != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
	i++;
	}
	putchar('\n');
	return (0);
}
