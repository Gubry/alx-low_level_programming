#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: size of the triangle
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = size; a > 0; a--)
		{
			for (b = 1; b <= size; b++)
			{
				if (b >= a)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
