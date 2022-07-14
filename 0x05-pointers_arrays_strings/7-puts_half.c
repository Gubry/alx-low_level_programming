#include "main.h"
/**
 * puts_half - print half of the string
 * @str:string bank
 * Return: Always 0
 */
void puts_half(char *str)
{
	int L;

	for (L = 0; str[L] != '\0'; L++)
		;


	L++;
	for (L /= 2; str[L] != '\0'; L++)
	{
		_putchar(str[L]);
	}
	_putchar('\n');
}
