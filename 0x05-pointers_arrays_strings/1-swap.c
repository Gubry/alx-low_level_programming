#include "main.h"
/**
 * swap_int - swap integers
 * @a: int to swap
 * @b: in to swap
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}
