#include "main.h"

/**
 * print_binary - a function
 * @n: an int
 * Return: void
*/

void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, printed = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			putchar('1');
			printed++;
		}
		else if (printed)
			putchar('0');
	}
	if (!printed)
	putchar('0');
}

int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}