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
		fir = sec;
		while (sec <= 99)
		{
			if (fir != sec)
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
}
