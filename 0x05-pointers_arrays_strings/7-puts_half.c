#include "main.h"

/**
 * puts_half - print half of a string.
 * Descriptio: print second half e.g 
 * Adio => io Azeez => ee 
 * 4/2 from index 2 to 4 then 
 * (5-1)/2 from index 2 to 5 
 * @str: string.
 */
void puts_half(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}
	if (!(len % 2))
		len /= 2;
	else
		len = (len + 1) / 2;

	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len++;
	}
	_putchar('\n');
}
