#include "main.h"

/**
 * print_numbers - print 0 to 9
 * Descroption: none
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		_putchar(num + '0');
	}

	_puchar('\n');
}
