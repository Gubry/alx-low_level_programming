#include "main.h"
/**
 * print_diagonal - prints diagonal lines
 * @n:hold the diagonals
 * Return: Alaways 0.
 */
void print_diagonal(int n)
{
	int l = 0;
	int s = 0;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (s = 0; s < l; s++)
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

