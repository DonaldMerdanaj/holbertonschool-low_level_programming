#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 *new_dog - creates a new dog instance
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *Return: new dog object instance
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *snoopdog = malloc(sizeof(dog_t));
	char *Cname = malloc(strlen(name) + 1);
	char *Cowner = malloc(strlen(owner) + 1);

	if (snoopdog == NULL || Cname == NULL || Cowner == NULL)
	{
		free(Cname);
		free(Cowner);
		free(snoopdog);
		return (NULL);
	}
	strcpy(Cname, name);
	strcpy(Cowner, owner);
	snoopdog->name = Cname;
	snoopdog->owner = Cowner;
	snoopdog->age = age;
	return (snoopdog);
}
