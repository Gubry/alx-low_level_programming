#include "main.h"
/**
 * _isalpha - checks for upper case
 * @c: the var that holds the char
 * Return: Always 0.
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
