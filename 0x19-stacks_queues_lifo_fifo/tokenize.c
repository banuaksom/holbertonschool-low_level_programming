#include "monty.h"
/**
  * tokenize - breaks the line in tokens
  * @i: character passed;
  * @head: pointer to head
  * Return: pointer to token;
  */
char *tokenize(stack_t *head, unsigned int i)
{
	char *token = NULL;
	char *new_token = NULL;
	int j;

	token = strtok(global.line, " ");
	if (!token)
		return (NULL);
	if (strcmp(token, "push") == 0)
	{
		new_token = _trim(strtok(NULL, "\n"));
		if (!new_token)
			int_error(head, i);
		for (j = 0; new_token[j]; j++)
		{
			if (new_token[0] == '-' || (new_token[j] >= '0' && new_token[j] <= '9'))
			{
				continue;
			}
			else
				int_error(head, i);
		}
		global.line_data = atoi(new_token);
	}
	return (token);
}
