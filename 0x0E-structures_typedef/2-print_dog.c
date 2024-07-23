#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a dog.
 * @d: Pointer to the dog struct to print.
 *
 * Description: Prints the name, age, and owner of the dog. If any
 *              of the elements are NULL, prints (nil) instead.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
