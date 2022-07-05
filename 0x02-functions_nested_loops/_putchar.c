#include <unistd.h>
/**
 * _putchar - with the char c to the stdou
 * pc - The char to print
 *
 * Return: On success 1
 * On error, -1 is returned and error is set approximately
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
