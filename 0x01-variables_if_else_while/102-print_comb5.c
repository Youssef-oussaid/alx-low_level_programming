#include <stdio.h>

/**
 * main - main
 * Return: always 0
 */

int main(void)
{
	int fir = 0, sec;

	while (fir <= 99)
	{
		sec = fir;
		while (sec <= 99)
		{
			if (sec != fir)
			{
				putchar((fir / 10) + 48);
				putchar((fir % 10) + 48);
				putchar(' ');
				putchar((sec / 10) + 48);
				putchar((sec % 10) + 48);
				if (fir != 98 || sec != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			sec++;
		}
		fir++;
	}
	putchar('\n');
	return (0);
}
