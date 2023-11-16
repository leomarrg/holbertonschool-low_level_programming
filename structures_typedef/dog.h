#ifndef DOG_H
#define DOG_H

/**
 * struct dog - this is the struct def of dog
 * @name: name received from main
 * @owner: owner received from main
 * @age: received from main
*/

struct dog
{
    char *name;
    char *owner;
    float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
