#include <stdio.h>

/**
 * main - entry point
 *@argc: counter
 @argv: an array
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
