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
 * create_file - creates a file
 * @filename: name of a file to create
 * @text_content: NULL terminated string to write to the file
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		return (1);
		close(fd);
	}
	w = write(fd, text_content, _strlen(text_content));
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
