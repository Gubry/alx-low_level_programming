#include "main.h"
/**
 * print_square - prints sqaure shape
 * @size: Shape size
 * Return:void
 */

void print_square(int size)
{
	int l;
	int s;

	if (size > 0)
	{

		for (l = 0; l < size; l++)
		{
			for (s = 0; s < size; s++)
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

