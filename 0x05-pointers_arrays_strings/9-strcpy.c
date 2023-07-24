#include "main.h"

/**
 * _strcpy - copy str from source to destination
 * including  next line
 * @dest: destination to copy to
 * @src: source to copy from
 * Retun: char destination
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (*src != '\0')
	{
		dest[index] = *src;
		index++;
		src++;
	}

	return (dest);

}
