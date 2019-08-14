#include "holberton.h"
/**
  * read_textfile - reads a text file, prints it to POSIX standard output
  * @filename: pointer to the text
  * @letters: number of letters to read and print
  * Return: int
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char *buf = malloc(sizeof(char) * letters + 1);
	int l;

	if (fd == -1 || !filename || !buf)
		return (0);
	l = read(fd, buf, letters);
	if (l == -1)
		return (0);
	buf[l] = '\0';
	l = write(STDOUT_FILENO, buf, l);
	if (l == -1)
		return (0);
	close(fd);
	free(buf);
	return (l);
}
