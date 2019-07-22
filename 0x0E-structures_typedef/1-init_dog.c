#include "dog.h"
#include <stdlib.h>
/**
  * init_dog -  initializes a variable of type struct dog
  * @d: struct element
  * @name: struct element
  * @age: struct element
  * @owner: struct element
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
