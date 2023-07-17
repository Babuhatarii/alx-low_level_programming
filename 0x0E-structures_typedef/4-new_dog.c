#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog structure, or NULL if it fails
 *
 * Description: function creates new dog structure and initializes members.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL)
		return (NULL);

	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	size_t name_len = strlen(name) + 1;
	size_t owner_len = strlen(owner) + 1;

	new_dog->name = malloc(name_len * sizeof(char));
	new_dog->owner = malloc(owner_len * sizeof(char));

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	strncpy(new_dog->name, name, name_len);
	strncpy(new_dog->owner, owner, owner_len);
	new_dog->age = age;

	return (new_dog);
}

