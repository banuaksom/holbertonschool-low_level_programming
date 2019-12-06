#include "holberton.h"
/**
  * f3 - compares first and last elements
  * @s: character to check
  * @end: character to check
  * Return: int
  */
int f3(char *s, char *end)
{
	if (*s == '\0')
		return (1);
	if (end <= s)
		return (1);
	if (*s != *end)
		return (0);
	return (f3(s + 1, end - 1));

}

/**
 * _strlen - computes string length
 * @s: character to check
 * Return: int
 */
into _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: character to check
 * Return: int
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);
	char *end = s + len - 1;

	return (f3(s, end));
}
