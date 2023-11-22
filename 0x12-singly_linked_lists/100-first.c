#include "lists.h"

/**
 * print_first - a function that prints before main
 * Return: void
*/

void __attribute__((constructor)) print_first()
{
	printf("You're beat! and yet, you must allow,\nI \
	bore my house upon my back!\n");
}
