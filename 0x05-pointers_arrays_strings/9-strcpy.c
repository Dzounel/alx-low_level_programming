#include "main.h"
#include <stddef.h>
/**
 * _strophy - copies the string pointed to by src
 * @dest: destination array
 * @src: source array
 * Return: string
 */
char *_strophy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	return (dest);
}
