#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - information of dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: stores different information of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - new typedef for struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H_ */
