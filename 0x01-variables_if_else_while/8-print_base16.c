#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int num = 48;

		while (num <= 102)
		{
			putchar(num);
		if (num == 57)
		{
			num += 39;
		}
		num++;
			}
	putchar('\n');
	return (0);
}
