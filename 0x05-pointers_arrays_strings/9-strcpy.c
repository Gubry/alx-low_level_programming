#include "main.h"
/**
 * _strcpy - copies from a address to the other
 * @dest: string bank
 * @src: string bank
 * Return: the string to copy
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
