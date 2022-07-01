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

	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(v));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(w));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(x));

	return (0);
}

