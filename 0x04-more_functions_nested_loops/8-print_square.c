#include "main.h"

/**
 * print_square - Prints a square using the '#' character.
 * @size: The size of the square to be printed.
 *
 * Return: Always 0.
 */

void print_square(int size)
{
	int end;

	if (size > 0)
	{
		for (end = 0; end < size; end++)
		{
			_putchar('#');
		}
	}
	else
	{
		_putchar('\n');
	}
}
