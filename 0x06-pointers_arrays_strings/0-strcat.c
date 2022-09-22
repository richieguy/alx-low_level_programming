#include "main.h"

/**
 *  _strcat -> this is a function strcat
 *  @dest: first param
 *  @src: second param
 *  Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++

	for (index = 0; src[index]; index++)
	{
		dest[dest_len] = src[index];
		len += 1
	}
	dest[len] = '/0';
	return (dest);
}
