#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog's basic info
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: This structure represents the basic information about a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to the dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This function initializes the members of a dog structure.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints the information of a dog
 * @d: Pointer to the dog structure
 *
 * Description: This function prints the information of a dog structure.
 */
void print_dog(struct dog *d);

/**
 * new_dog - Creates a new dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog structure
 *
 * Description: function creates structure and initializes its members.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees the memory allocated for a dog structure
 * @d: Pointer to the dog structure
 *
 * Description: This function frees the memory allocated for a dog structure.
 */
void free_dog(dog_t *d);

/**
 * _strcpy - Copies the string pointed by src to dest
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to the destination string
 *
 * Description: function copies src to buffer pointed by dest.
 */
char *_strcpy(char *dest, char *src);

/**
 * _strlen - Computes the length of a string
 * @s: Pointer to the string
 *
 * Return: The length of the string
 *
 * Description: This function computes the length of a string.
 */
int _strlen(char *s);

#endif /* DOG_H */

