#include "dog.h"

/**
 * print_dog - function that print  struct dog
 * @d: pointer
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("my_dog.name %s\n", d->name ? d->name "(poppy)");
		printf("my_dog.age %f\n", d->age);
		printf("my_dog.owner %s\n", d->owner ? d->owner "(bob)");
	}
}
