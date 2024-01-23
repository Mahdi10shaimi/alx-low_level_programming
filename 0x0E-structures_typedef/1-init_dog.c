#include "dog.h"
#include <stddef.h>
/**
 * init_dog - function that initialize a variable
 * @d : parametre
 * @name : parametre
 * @age : parametre
 * @owner : parametre
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
