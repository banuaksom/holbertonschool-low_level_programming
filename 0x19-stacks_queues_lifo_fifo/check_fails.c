#include "monty.h"
glo_var global;
/**
 * argc_fail - checks number of arguments passed
 * @argc: number of argc
 * Return: void
 */
void argc_fail(int argc)
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}

/**
 * open_fail - checks if file was opened
 * @argv: file
 * Return: void
 */
void open_fail(char *argv[])
{
	if (!global.file)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
}
/**
 * getline_fail - checks getline for success
 * @read_lines: number of lines in file
 * Return: void
 */
void getline_fail(ssize_t read_lines)
{
	if (read_lines == -1)
	{
		fclose(global.file);
		exit(0);
	}
}
