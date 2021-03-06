#ifndef DOG
#define DOG
/**
 *struct dog - the mascot
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);
#endif /* DOG */
