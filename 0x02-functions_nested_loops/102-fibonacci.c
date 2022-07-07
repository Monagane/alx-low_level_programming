#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci
 * starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	int n = 0;
	long int a = 0, b = 1, next;

	while (n < 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (n < 49)
		{
			printf(", ");
		}
		n++;
	}
	putchar('\n');
	return (0);
}
