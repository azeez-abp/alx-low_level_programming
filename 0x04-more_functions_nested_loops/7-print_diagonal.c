#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the character \ should be printed.
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int m;

		for (m = 0; m < n; m++)
		{
			int s;

			for (s = 0; s < m; s++)
			{
				_putchar(' ');
			}

			_putchar('\\');

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
