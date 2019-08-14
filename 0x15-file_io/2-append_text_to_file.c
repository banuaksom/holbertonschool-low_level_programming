#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	return (i);
}
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to a text
 * @text_content: NULL terminated string to add at the end of the file
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	w = write(fd, text_content, _strlen(text_content));
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
