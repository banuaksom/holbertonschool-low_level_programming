#ifndef OBJECT_LIKE_MACRO_H
#define OBJECT_LIKE_MACRO_H
/**
  * struct dog - struct named dog
  * @name: struct element
  * @age: struct element
  * @owner: struct element
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
