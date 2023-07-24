#include "main.h"
/**
 * print_rev -print reverse of str
 * @s: the value to process to the stdout in reverse.
 */
void print_rev(char *s)
{
	int len;

	/**
	 * get the total
	 * lenght
	 */

	while (*(s + len) != '\0')
	{
		len++;
	}

	/**
	 * from the lenght down
	 * print each char
	 */

	while (len--)
	{
		_putchar(*(s + (len)));
	}
	_putchar('\n');
}
