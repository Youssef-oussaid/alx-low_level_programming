#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: counter
 * @argv: an array
 * Retun: 0 or 1
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		sum = atoi(argv[1]) + atoi(argv[2]);
		printf("%d\n", sum);
	}
	return (0);
}
