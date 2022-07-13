#include "main.h"
/**
 * _strlen - count no of char in a str
 * @s: hold the string
 * Return: the length
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l])
	{
		l++;
	}
	return (l);
}
