#ifndef DOG_H
#define DOG_H
/**
 * struct dog - to give details about a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: the dog owner
 * Description: a structure which gives details
 * about a particular. it uses variable names of different data-types
 */
struct dog
{
	char * name;
	float age;
	char * owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*
 * dog_t- new name for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

