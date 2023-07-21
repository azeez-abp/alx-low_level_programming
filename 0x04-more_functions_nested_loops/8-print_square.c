#include "main.h"

/**
 * print_square - Prints a square using the '#' character.
 * @size: The size of the square to be printed.
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int w;
	int h;

	if (size > 0)
	{
		for (w = 0; w < size; w++)
		{
			for (h = 0; h < size; h++)
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
