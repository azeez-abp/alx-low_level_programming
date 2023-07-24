#include "main.h"

/**
  * _strlen - return the lenth of the string 
  * @s: the string to measure.
  *
  * Return: Int value of the length.
  */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}

