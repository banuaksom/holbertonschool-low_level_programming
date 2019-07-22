#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - creates a new dog
  * @name: struct element
  * @age: struct element
  * @owner: struct element
  * Return: pointer
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, name_noc = 0, owner_noc = 0;
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		name_noc++;
	for (i = 0; owner[i] != '\0'; i++)
		owner_noc++;
	p->name = malloc(sizeof(char) * name_noc + 1);
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->age = age;
	p->owner = malloc(sizeof(char) * owner_noc + 1);
	if (p->owner == NULL)
	{
		free(p);
		free(p->name);
		return (NULL);
	}
	for (i = 0; i < name_noc; i++)
		p->name[i] = name[i];
	p->name[i] = '\0';
	for (i = 0; i < owner_noc; i++)
		p->owner[i] = owner[i];
	p->owner[i] = '\0';
	return (p);
}
