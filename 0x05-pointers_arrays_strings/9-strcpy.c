#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to the dest.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (counr >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}