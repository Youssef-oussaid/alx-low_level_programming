#include <stdio.h>
#include "dog.h"

/**
 * print_dog - a function
 * @d: a struct pointer
 * Return: always 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);
	else
	{

		if ((*d).name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d.name);

		if ((*d).age == NULL;
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d.age);

		if ((*d.)owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d.owner);
	}
}
