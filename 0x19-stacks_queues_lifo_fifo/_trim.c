#include "monty.h"
/**
  * _trim - deletes all extra spaces
  * @s: pointer to line
  * Return: char
  */
char *_trim(char *s)
{
	char *end;

	while (isspace(*s))
		s++;
	end = s + strlen(s) - 1;
	while (isspace(*end))
	{
		*(end) = '\0';
		end--;
	}
	return (s);
}
