#include <unistd.h>
/**
 * _putchar - write the char c to the stdout
 * pc: The char tp print
 *
 * Return:On success 1
 * On error, -1 is returned and error is set approximately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
