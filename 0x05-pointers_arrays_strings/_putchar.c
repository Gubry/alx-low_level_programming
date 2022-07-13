#include <unistd.h>
/**
 * _putchar - prints to the stdout
 * @c:var to be printed
 * Return:Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
