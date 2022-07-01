#include <stdio.h>
/**
 * main - Entry point
 * Description: using the main function
 * to print the size of different var type
 * Return: Always 0(success)
 */

int main(void)
{
	int v;
	long int w;
	long long int x;
	char y;
	float f;

	printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(v));
	printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(w));
	printf("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(f)

	return (0);
}

