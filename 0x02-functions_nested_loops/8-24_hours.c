#include "main.h"
/**
 * jack_bauer - print time
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int h1;
	int h2;
	int m1;
	int m2;
	int a = 9;

	h2 = 0;

	while (h2 <= 2)
	{
		if (h2 == 2)
		{
			a = 3;
		}
		h1 = 0;
		while (h1 <= a)
		{
			m1 = 0;
			while (m1 <= 5)
			{
				m2 = 0;
				while (m2 <= 9)
				{
					_putchar('0' + h2);
					_putchar('0' + h1);
					_putchar(':');
					_putchar('0' + m2);
					_putchar('0' + m1);
					m2++;
				}
				m1++;
			}
			h1++;
		}
		h2++;
	}
}


