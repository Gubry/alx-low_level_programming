#include <stdio.h>
/**
 * main - prints from 1-100 by inserting fizz in
 * multiple of 3 and buzz in 5 and fizzbuzz in both
 * Return: Alway 0.
 */

int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", num);
		}
		if (num != 100)
		{
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}

