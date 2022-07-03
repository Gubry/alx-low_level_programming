#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char ch = 'a';

	int n = 0;

	while (n < 26)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
		n++;
	}
	putchar('\n');
	return (0);
}
