#include "main.h"

/**
 * print_numbers - Print numbers 0-9.
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num + '0');
	}
	_putchar('\n');
}
