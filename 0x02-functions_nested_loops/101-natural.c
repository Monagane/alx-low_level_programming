#include <stdio.h>
#include <stdlib.h>

/**
 * main - list all the natural numbers below 10
 * that are multiples of 3 or 5
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	int sum = 0;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
		n++;
	}
	printf("%i\n", sum);
	return (0);
}
