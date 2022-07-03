#include <stdio.h>
#include <stdlib.h>
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
		putchar(ch);
		ch++;
		n++;
	}
	putchar('\n');
	return (0);
}
