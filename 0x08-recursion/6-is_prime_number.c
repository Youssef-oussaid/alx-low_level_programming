#include "main.h"

/**
 * is_prime_number - function
 * @n: variable
 * @nn: varianle
 * Return: 0 or 1
 */

int check_prime(int n, int nn);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - function
 * @n: variable
 * @nn: varianle
 * Return: 0 or 1
 */

int check_prime(int n, int nn)
{
	if (nn >= n && > 1)
		return (1);
	else if (n % nn == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, nn + 1));
}
