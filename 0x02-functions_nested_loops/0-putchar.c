#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char *p = "_putchar";

	while (*p != '\0')
	{
		_putchar(*p);
		p++;
	}
	_putchar('\n');

	return (0);
}
