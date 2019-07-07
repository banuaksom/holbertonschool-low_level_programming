#include "holberton.h"
/**
 * rot13 - encodes a string using rot13
 * @s: character to check
 * Return: char
 */

char *rot13(char *s)
{
	int i;
	char matching[256];
	char *b = s;

	for (i = 0; i < 256; i++)
	{
		matching[i] = i;
	}
	matching['a'] = 'n';
	matching['A'] = 'N';
	matching['b'] = 'o';
	matching['B'] = 'O';
	matching['c'] = 'p';
	matching['C'] = 'P';
	matching['d'] = 'q';
	matching['D'] = 'Q';
	matching['e'] = 'r';
	matching['E'] = 'R';
	matching['f'] = 's';
	matching['F'] = 'S';
	matching['g'] = 't';
	matching['G'] = 'T';
	matching['h'] = 'u';
	matching['H'] = 'U';
	matching['i'] = 'v';
	matching['I'] = 'V';
	matching['j'] = 'w';
	matching['J'] = 'W';
	matching['k'] = 'x';
	matching['K'] = 'X';
	matching['l'] = 'y';
	matching['L'] = 'Y';
	matching['m'] = 'z';
	matching['M'] = 'Z';
	matching['n'] = 'a';
	matching['N'] = 'A';
	matching['o'] = 'b';
	matching['O'] = 'B';
	matching['p'] = 'c';
	matching['P'] = 'C';
	matching['q'] = 'd';
	matching['Q'] = 'D';
	matching['r'] = 'e';
	matching['R'] = 'E';
	matching['s'] = 'f';
	matching['S'] = 'F';
	matching['t'] = 'g';
	matching['T'] = 'G';
	matching['u'] = 'h';
	matching['U'] = 'H';
	matching['v'] = 'i';
	matching['V'] = 'I';
	matching['w'] = 'j';
	matching['W'] = 'J';
	matching['x'] = 'k';
	matching['X'] = 'K';
	matching['y'] = 'l';
	matching['Y'] = 'L';
	matching['z'] = 'm';
	matching['Z'] = 'M';
	for ( ; *s != '\0'; s++)
	{
		*s = matching[(int)*s];
	}
	s = b;
	return (s);
}
