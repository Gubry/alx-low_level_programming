#include "main.h"
/**
 * _strncpy - copy strings
 * @dest: string bank
 * @src: string bank
 * @n:no of bytes
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
