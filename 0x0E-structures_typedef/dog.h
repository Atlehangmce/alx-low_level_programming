#ifndef DOG_H
#define DOG_H
/**
* struct dog - contains a dog's basic information
* @name: the name of the dog
* @age: the age of the dog
* @owner: the owner of the dog
*
* Description:struct represents a dog and stores its name, age, and owner.
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
/**
* init_dog - initializes a dog structure
* @d: pointer to the dog structure to initialize
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Description: This function initializes the dog structure with the provided
* name, age, and owner.
*/
void init_dog(dog_t *d, char *name, float age, char *owner);
/**
* print_dog - prints the information of a dog
* @d: pointer to the dog structure to print
*
* Description: This function prints the name, age, and owner of the dog.
*/
void print_dog(const dog_t *d);
/**
* new_dog - creates a new dog structure
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Return: pointer to the newly created dog structure
*
* Description: This function creates a new dog structure dynamically allocated
* in memory, initializes it with the provided name, age, and owner, and returns
* a pointer to it.
*/
dog_t *new_dog(const char *name, float age, const char *owner);
/**
* free_dog - frees memory allocated for a dog structure
* @d: pointer to the dog structure to free
*
* Description: This function frees the memory allocated for a dog structure,
* including the memory allocated for the name and owner strings.
*/
void free_dog(dog_t *d);

#endif
