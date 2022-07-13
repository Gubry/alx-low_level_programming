#include "main.h"
/**
 * _puts - print to stdout
 * @str:string bank
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
