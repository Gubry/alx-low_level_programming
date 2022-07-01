#include <stdio.h>
/**
 * main - Entry point
 * Description: using the main function
 * to print the size of different var type
 * Return: Always 0(success)
 */

int main(void)
{
	printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeof(int));
	printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(char));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
	return (0);
}

