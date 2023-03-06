#include "main.h"

/**
* _strchr -> string character
* @s: string given
* @c: another char
* Return: a string
*/
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return (0);
}

