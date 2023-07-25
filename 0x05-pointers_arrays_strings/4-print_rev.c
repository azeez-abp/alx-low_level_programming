#include "main.h"

/**
 * print_rev - Print the reverse of a string to stdout.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
	int len = 0;

	/* Get the total length */
	while (*(s + len) != '\0')
	{
		len++;
	}

	/* From the length down, print each character */
	while (len--)
	{
		_putchar(*(s + len));
	}

	_putchar('\n');
}
