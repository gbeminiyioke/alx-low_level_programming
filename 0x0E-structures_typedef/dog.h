#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure with dog details
 * @name: first member, dogs name
 * @age: second member, dogs age
 * @owner: third member, dogs owner
 * Description: full details
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
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif
