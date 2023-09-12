#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _len - function that for string length
 *
 * @i: string
 *
 * Return: length
 */
int _len(char *i)
{
	int j = 0;

	while (i[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 * _copy - function that copy string
 *
 * @i: string
 * @j: string
 *
 * Return: j
 */
char _copy(char *j, char *i)
{
	int k;

	for (k = 0; i[k]; k++)
		j[k] = i[k];
	j[k] = '\0';

	return (j);
}

/**
 * print_dog - function that print  struct dog
 *
 * @name: char
 * @age: float
 * @owner: char
 *
 *
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	return (NULL);
	dog->name = malloc(sizeof(char) * (_len(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
}
