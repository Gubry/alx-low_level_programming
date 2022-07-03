#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char ch = 'a';

	char CH = 'A';

	int n = 0;

	while (n < 26)
	{
		putchar(ch);
		putchar(CH);
		ch++;
		CH++;
		n++;
	}
	putchar('\n');
	return (0);
}
