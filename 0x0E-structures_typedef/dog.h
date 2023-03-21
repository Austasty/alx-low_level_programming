#ifndef DOG_H
#define DOG_H

/**
 * struct dog- the user define date type
 * @name: character pointer to name member
 * @age: second member
 * @owner: third member point in struct
 * Return 0 (success);
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
