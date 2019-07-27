#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_char - prints char
 * @arguments: args pointer
 */
void print_char(va_list arguments)
{
	printf("%c", va_arg(arguments, int));
}
/**
* print_int - prints integers
* @arguments: args pointer
*/
void print_int(va_list arguments)
{
	printf("%d", va_arg(arguments, int));
}
/**
 * print_float - prints float
 * @arguments: character to check
 */
void print_float(va_list arguments)
{
	printf("%f", va_arg(arguments, double));
}
/**
  * print_str - prints string
  * @arguments: args pointer
  */
void print_str(va_list arguments)
{
	char *str = va_arg(arguments, char*);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
  *print_all - prints anything
  * @format: list of types of arguments passed to the function
  */
void print_all(const char * const format, ...)
{
	op_t ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};
	va_list arguments;
	char *separator = "";
	int i = 0, j;

	va_start(arguments, format);
	while (format != '\0' && format[i] != '\0')
	{
		j = 0;
		while (ops[j].op != '\0')
		{
			if (*ops[j].op == format[i])
			{
				printf("%s", separator);
				ops[j].f(arguments);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arguments);
}
