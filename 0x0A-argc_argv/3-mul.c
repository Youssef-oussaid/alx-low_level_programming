#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: a counter
 * @argv: an array of strigs
 * Return: 0 if successful.
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
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	return (0);
}
