#include "monty.h"
glo_var global;
/**
  * main - reads .m file and executes the content
  * @argc: number of arguments passed
  * @argv: argumnets passed
  * Return: int
  */
int main(int argc, char *argv[])
{
	stack_t *head = NULL;

	global.line = NULL;
	global.arr_lines = NULL;
	global.len = 0;
	unsigned int line_counter;

	argc_fail(argc);
	global.file = fopen(argv[1], "r");
	open_fail(argv);
	global.read_lines = getline(&global.line, &global.len, global.file);
	getline_fail(global.read_lines);
	global.line = _trim(global.line);
	for (line_counter = 1; global.read_lines >= 0; line_counter++)
	{
		global.arr_lines = tokenize(head, line_counter);
		if (global.arr_lines)
			get_function(&head, line_counter);
		global.read_lines = getline(&global.line, &global.len, global.file);
		global.line = _trim(global.line);
	}
	fclose(global.file);
	free_stack(head);
	return (0);
}
