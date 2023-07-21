#include "main.h"

/**
 * print_triangle - print triangle shape
 * @size: Size determinant
 * Return: void
 */

void print_triangle(int size)
{
	int out, in, in2;

	if (size > 0)
	{
		for (out = 1; out <= size; out++)
		{
			for (in = 0; in <= (size - out); in++)
			{
				_putchar(' ');
			}

			for (in2 = 1; in2 <= out; in2++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
