#include <stdio.h>
/**
 * main - Entry point
 * Description: using the main function
 * to print the size of different var type
 * Return: Always 0(success)
 */

int main(void)
{
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of float: %lu byte(s)\n", sizeof(float));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
	return (0);
}

